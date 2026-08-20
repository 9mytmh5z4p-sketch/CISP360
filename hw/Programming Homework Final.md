# Final Programming Assignment: Text Adventure Game

Final Programming Assignment:
Text Adventure Game
## Assignment Overview

For the final programming assignment, you will create a complete text adventure game in C++. Text
adventures, such as the classic game Zork, describe a world through text and allow the player to
explore it by entering commands.
Your game must contain interconnected locations, persistent game state, meaningful interactions, an
obstacle that must be overcome, and a clear ending. Everyone will build the same kind of program
and meet the same technical requirements, but you will choose the theme, setting, story, objective,
room descriptions, objects, commands, and ending.
Your finished program should feel like one small, complete game rather than a collection of unrelated
demonstrations. A player who has not seen your code should be able to understand the objective,
explore the world, solve the central obstacle, and reach the ending.
## Academic Integrity and AI Use

You may use AI tools to help explain concepts, review error messages, or understand lecture
material. You may not use AI to write your program code, game text, puzzle, or story for you. Your
submitted work should reflect your own thinking, theme, structure, variable names, functions,
descriptions, interactions, and output design.
## Common Program Standards (CPS)

Your program must meet the following standards in addition to the tasks assigned in this homework:
- **1.** Your program must compile in a linux environment with a compiler running C++17 or greater.
Onlinegdb is the only compiler I know of that does NOT meet this standard.
- **2.** Your program must produce logically consistent output. i.e. no logic errors.
- **3.** Your program must include a source file header. See earlier assignments for examples.
- **4.** Your program must include a program greeting. See earlier assignments for examples.
- **5.** You cannot use .h include files as they are for C, not C++.
- **6.** Functions must use function prototypes. Functions go below main().
- **7.** Your plagiarism score box cannot be red or darker.
- **8.** Global variables are not permitted unless they are constants.
## Technical Requirements: 10 Required Tasks

Your program must complete all 10 tasks below.
## Task 1: Create a Personalized Adventure World

Your program must:

- **1.**1. Display a game title when the program begins.
- **1.**2. Ask for the player’s name and use that name in at least two later messages.
- **1.**3. Introduce the game’s setting and state the player’s objective before accepting the first
command.
- **1.**4. Give every required room a unique displayed name and mention the name of the relevant object,
character, or environmental element in the output of every required interaction.
- **1.**5. Display an ending message that includes the player’s name and states that the objective from
the introduction has been completed.
## Task 2: Represent the Game’s Rooms

Your program must:

- **2.**1. Store the required room data in one or more indexed collections.
- **2.**2. Store a name, a detailed description, and exit information for every room.
- **2.**3. Create and store at least five distinct rooms in the program.
- **2.**4. Assign each room a stable index or identifier that can be used to locate it in the collection.
- **2.**5. Use the current room’s index or identifier to retrieve its name, description, and exits while the
game is running.
You may use parallel arrays, parallel vectors, a struct, or a class to organize room information.
Choose the approach that works best for your design; no single approach is required.
## Task 3: Connect and Navigate the World

Your program must:

- **3.**1. Track the player’s current room with a variable that is updated after valid movement.
- **3.**2. Connect the rooms so that every required room can be reached from the starting room.
- **3.**3. Accept movement in all four cardinal directions: north, south, east, and west.
- **3.**4. Display the available exits for the player’s current room.
- **3.**5. Reject movement through a nonexistent or unavailable exit without changing the player’s current
room.
The player does not need to be able to move in all four cardinal directions from every room. Each
room should provide only the exits that exist in your world. You may also add other forms of
movement, such as moving up or down, entering or leaving, or teleporting between locations.
## Task 4: Build the Command Loop

Your program must:

- **4.**1. Use a loop that continues to accept commands while the game is active.
- **4.**2. Use getline() to read each command as a complete line and process commands without
requiring exact uppercase and lowercase matching.
- **4.**3. Implement a look command that redisplays the current room and a help command that lists all
supported commands.
- **4.**4. Implement a quit command that asks for confirmation before ending an unfinished game.
- **4.**5. Implement at least two different interaction command words, such as take, use, examine,
open, talk, or search, and display separate responses for an empty command and an
unrecognized command.
## Task 5: Track Persistent Game State

Your program must:

- **5.**1. Track whether each room has previously been visited.
- **5.**2. Display the room’s detailed description on the first visit and an abbreviated description on later
visits.
- **5.**3. Track at least one object that the player can acquire, activate, or otherwise change.
- **5.**4. Track at least two completed actions or changed conditions with variables stored outside the
command loop.
- **5.**5. Make later output or available actions depend on at least two pieces of previously stored game
state.
Persistent game state means that something the player does in one room continues to affect the
game afterward, including after the player leaves that room. For example, an object that has been
collected remains collected, an unlocked door remains unlocked, and a completed action remains
completed for the rest of the game.
## Task 6: Create Meaningful Interactions

Your program must:

- **6.**1. Include at least three distinct objects, characters, or environmental elements with which the
player can interact.
- **6.**2. Assign each required interaction to a specific room and reject that interaction when the player is
in any other room.
- **6.**3. Display a different result message for each required interaction, and make at least two of the
interactions update different stored game-state values.
- **6.**4. Prevent the player from receiving a repeat benefit from an interaction that has already been
completed.
- **6.**5. Display separate feedback messages for these three failure conditions: the player is in the wrong
room, a required earlier action has not been completed, and the interaction has already been
completed.
## Task 7: Create an Obstacle and Ending

Your program must:

- **7.**1. Include a locked path, puzzle, hazard, or character request that prevents access to the victory
ending.
- **7.**2. Require the player to obtain information, acquire or use an object, or complete an earlier action
before overcoming the obstacle.
- **7.**3. Check at least one stored prerequisite value before completing the obstacle, then update a
stored value to record that the obstacle has been completed.
- **7.**4. Prevent the player from reaching the victory ending before completing the required obstacle.
- **7.**5. End the game loop and display the ending message required by Task 1.5 when the player
reaches the victory condition.
## Task 8: Organize and Test the Program

Your program must:

- **8.**1. Create and call at least six programmer-defined functions, not including main(), with prototypes
above main() and definitions below it.
- **8.**2. Include a separate function that displays the current room.
- **8.**3. Include separate functions for attempting movement and processing or dispatching player
commands.
- **8.**4. Pass game information with parameters and use a non-const reference parameter when a
function must modify the caller’s game state.
- **8.**5. Include comments at the end of the source file containing one successful sequence of
commands from the beginning to the ending and one test sequence containing an invalid command,
invalid movement, and a premature interaction.
## Task 9: Implement Your First Enhancement

Your program must:

- **9.**1. Choose one enhancement from the enhancement list below and meet its stated minimum
criteria.
- **9.**2. Add a full-line comment immediately before the principal code for the enhancement using the
required Enhancement 1 format.
- **9.**3. Connect the enhancement to the game loop, command-processing code, or another function
that is called during play.
- **9.**4. Display output that shows the player when the enhancement has been used, triggered, or
updated.
- **9.**5. Add instructions for using or encountering the enhancement to the help command and
demonstrate it in a commented test sequence at the end of the source file.
## Task 10: Implement Your Second Enhancement

Your program must:

- **10.**1. Choose a different enhancement from the enhancement list below and meet its stated minimum
criteria.
- **10.**2. Add a full-line comment immediately before the principal code for the enhancement using the
required Enhancement 2 format.
- **10.**3. Connect the enhancement to the game loop, command-processing code, or another function
that is called during play.
- **10.**4. Display output that shows the player when the enhancement has been used, triggered, or
updated.
- **10.**5. Add instructions for using or encountering the enhancement to the help command and
demonstrate it in a commented test sequence at the end of the source file.
## Enhancement List

Use these comment formats immediately before the principal code for each enhancement:
// Enhancement 1 - Brief description of the feature
// Enhancement 2 - Brief description of the feature
Choose two different enhancements:

Inventory: Implement an inventory command that displays at least two objects the player can
acquire and indicates when the inventory is empty.
Branching dialogue: Include a character with at least two player response choices and at least two
different character responses determined by a stored game-state value.
Combat, health, or hazard: Track a numeric player value that can both increase and decrease,
display it during play, and end or alter an encounter when it reaches a defined limit.
Light and darkness: Include at least one dark room whose description or available action changes
after the player obtains or activates a light source.
Multiple endings: Implement at least two different ending messages and select between them
using a stored value changed by the player’s actions.
Score or turn counter: Update a numeric score or turn count during play and display its final value
when the game ends.
Randomization: Use a random value to select between at least three events or object locations,
while ensuring every possible result still permits the game to be completed.
External game data: Read room, object, or other game data from an external file and use at least
three values from that file during play.
Save and load: Write the current room and at least two other game-state values to a file, then
restore all three values when the file is loaded.
Student-designed enhancement: Obtain instructor approval for five observable minimum criteria
before implementing the enhancement.
If you propose your own enhancement, ask for approval before implementing it.
## Submission Requirements

Submit your completed program to Canvas. See the syllabus for submission and late-policy details.
Before uploading:
- **1.** Make sure your program compiles.
- **2.** Play the game from beginning to ending using the successful test sequence in your source file.
- **3.** Run the invalid-input test sequence and confirm that the game handles each attempt correctly.
- **4.** Rename your source file from .cpp to .txt.
- **5.** Upload the .txt file to Canvas.
Your instructor will download submissions and compile/execute them. Program output may be
appended to the end of your submitted source file as a comment. Programs that do not compile will
receive significant point deductions.
## Late Policy

See the syllabus for the late policy.

This final project cannot be submitted late because the class will have ended and Canvas will be closed.

## Final Reminder

This assignment gives everyone the same programming challenge while leaving the world, story,
puzzle, and personality of the game to you. Build the required features first, keep the game small
enough to test completely, and then add your enhancements.
Do not overthink the theme or prioritize thematic consistency over demonstrating your programming
skills. The purpose of this assignment is to program. If meeting a technical requirement means
adding something that does not fit perfectly with the rest of your theme, that is acceptable. Your
grade will not be reduced because some material falls outside the theme you selected.
Use AI only for support with concepts, error messages, or reviewing lecture ideas. Do not use AI to
write your program code, game text, puzzle, or story.
