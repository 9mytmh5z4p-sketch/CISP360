#!/bin/zsh

set -u
unsetopt BG_NICE 2>/dev/null || true

script_dir="${0:A:h}"
project_dir="${script_dir:h}"
cd "$project_dir" || exit 1

python_command="$(command -v python3)"
if [[ -z "$python_command" ]]; then
  echo "Python 3 is required to preview the Early Coding Check."
  echo "Press Return to close this window."
  read -r
  exit 1
fi

port=8765
while /usr/bin/nc -z 127.0.0.1 "$port" >/dev/null 2>&1; do
  (( port += 1 ))
done

"$python_command" -m http.server "$port" --bind 127.0.0.1 >/private/tmp/p360-toolset-preview.log 2>&1 &
server_pid=$!

cleanup() {
  kill "$server_pid" >/dev/null 2>&1 || true
}
trap cleanup EXIT INT TERM

server_ready=false
for _ in {1..30}; do
  if /usr/bin/nc -z 127.0.0.1 "$port" >/dev/null 2>&1; then
    server_ready=true
    break
  fi
  sleep 0.1
done

if [[ "$server_ready" != true ]]; then
  echo "The Early Coding Check preview could not be started."
  echo "Press Return to close this window."
  read -r
  exit 1
fi

preview_url="http://127.0.0.1:${port}/hw/Early%20Coding%20Check.html"
open "$preview_url"

echo "Early Coding Check preview is running at:"
echo "$preview_url"
echo
echo "Edit Early Coding Check.md, save it, then choose Reload Markdown in the browser."
echo "Press Control-C or close this window to stop the preview."

wait "$server_pid"
