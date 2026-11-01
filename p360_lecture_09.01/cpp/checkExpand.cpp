// checkExpand.cpp
// A coding activity for this debugging excercise.
/*
Sanity check: confirm a score of 0. A 0 is in range, but it’s more often a typo or 
a missed test than a real score. This teaches the difference between valid (passes 
type and range) and sensible (probably what the user meant), which is exactly what 
my “Sanity checks here” comment is for. It goes last in the gauntlet.

A nice follow-up question: why is low == 0 there? Without it, the check would fire 
for any range that includes 0, and getInt is shared code. That leads into whether a 
general-purpose function should hold assumptions that only make sense for one caller.
*/

// sanity check: a zero is legal but suspicious -- confirm it
if (!isDirty && num == 0 && low == 0) {
  string answer;
  cout << "A score of 0? Enter Y to confirm: ";
  getline(cin, answer);
  if (answer != "Y" && answer != "y") isDirty = true;
}