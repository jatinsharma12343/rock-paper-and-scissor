🎮 Rock, Paper, Scissors Game (C++)
📋 Description
This is a simple Rock, Paper, Scissors game written in C++.
The user plays against the computer, which randomly selects its move using the built-in random number generator.

⚙️ Features
Player chooses between Rock, Paper, or Scissors

Computer makes a random choice

Displays both choices and announces the winner

Validates user input to prevent invalid selections

🧩 How It Works
The program displays a menu:

markdown
Copy code
1. Rock
2. Paper
3. Scissors
The user inputs a choice between 1–3.

The computer randomly selects a number between 1–3.

The program compares both choices:

Rock beats Scissors

Paper beats Rock

Scissors beats Paper

Same choice = Draw

The result is displayed on the screen.

🛠️ Technologies Used
C++

Standard Template Library (STL) for strings and input/output

cstdlib and ctime for random number generation

▶️ How to Run
Step 1: Save the Code
Save the code in a file named rock_paper_scissors.cpp.

Step 2: Compile the Program
Run this command in your terminal or command prompt:

bash
Copy code
g++ rock_paper_scissors.cpp -o rock_paper_scissors
Step 3: Execute the Program
bash
Copy code
./rock_paper_scissors
🧠 Example Output
markdown
Copy code
==== Rock, Paper, Scissors Game ====
1. Rock
2. Paper
3. Scissors
Enter your choice (1-3): 2
You chose: Paper
Computer chose: Rock
You win!

