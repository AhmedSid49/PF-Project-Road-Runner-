# ROAD RUNNER – PF Project

## Section A: Project Introduction

Road Runner is a car-avoidance game developed in C where players control a car across three lanes to avoid incoming obstacles. Using simple keyboard controls, players must dodge obstacles, survive as long as possible, and achieve a high score. The game features random obstacle generation, collision detection, score tracking, and high-score saving.

## Section B: Features & Test Cases (Execution Scenarios)

### Case 1: Game Initialization & High Score Display

- **Description:** Tests whether the game starts correctly, displays the game title, and retrieves the previously saved high score from the file.
- **Inputs:** Press any key to start the game.
- **Expected Output:** The game displays the title "ROAD RUNNER", the saved high score (if available), and the keyboard controls.
- **Screenshot:**  <img width="671" height="117" alt="image" src="https://github.com/user-attachments/assets/95f751c3-8325-4596-87d7-0adb00eeb713" />


### Case 2: Player Car Movement

- **Description:** Tests the player's ability to move the car between the three available lanes using keyboard controls.
- **Inputs:** Press `a` to move left and `d` to move right.
- **Expected Output:** The player's car (`a`) moves between the three lanes. The car cannot move beyond the leftmost or rightmost lane.
- **Screenshot:** <img width="207" height="387" alt="image" src="https://github.com/user-attachments/assets/608f47df-9801-4a5e-90b4-7657f1560a91" />


### Case 3: Random Obstacle Generation

- **Description:** Tests the random generation and downward movement of obstacles on the road.
- **Inputs:** Start the game and allow the obstacle to move down the road.
- **Expected Output:** An obstacle (`X`) appears in a randomly selected lane and moves downward towards the player's car. Once it reaches the bottom, another obstacle is generated in a random lane.
- **Screenshot:** <img width="141" height="125" alt="image" src="https://github.com/user-attachments/assets/37bbd616-d740-4f1e-8ff2-f17824b95e39" />


### Case 4: Collision Detection & Game Over

- **Description:** Tests whether the game correctly detects a collision when the player's car and an obstacle occupy the same lane at the same position.
- **Inputs:** Allow an obstacle to reach the player's car without moving to another lane.
- **Expected Output:** The game ends and displays "GAME OVER. Nice Try!" along with the player's final score.
- **Screenshot:** <img width="277" height="132" alt="image" src="https://github.com/user-attachments/assets/b0420484-7d82-40a5-8c37-f772329ec09a" />


### Case 5: Score Tracking

- **Description:** Tests whether the player's score increases after successfully avoiding an obstacle.
- **Inputs:** Avoid an obstacle until it passes the player's car.
- **Expected Output:** The score increases by 10 points whenever an obstacle successfully passes the player.
- **Screenshot:** <img width="180" height="180" alt="image" src="https://github.com/user-attachments/assets/1402786a-2427-4508-81dc-cc3cad82a8a6" />


### Case 6: High Score Saving & Updating

- **Description:** Tests the program's ability to compare the current score with the previously saved high score and update it when a new record is achieved.
- **Inputs:** Complete a game with a score higher than the previously saved high score.
- **Expected Output:** The game displays "NEW HIGH SCORE!" and saves the updated score in `highscore.txt`. If the previous high score is higher, it remains unchanged.
- **Screenshot:** <img width="195" height="62" alt="image" src="https://github.com/user-attachments/assets/165ec346-e956-4576-badb-6bc6f89eef4a" />


### Case 7: Quit Game

- **Description:** Tests whether the player can exit the game using the designated quit key.
- **Inputs:** Press `Q` during gameplay.
- **Expected Output:** The current game session ends and the final score is displayed.
- **Screenshot:** <img width="401" height="151" alt="image" src="https://github.com/user-attachments/assets/ee8db0ed-4501-47bf-b6cc-cc404dc4687b" />


## Controls

- `A` : Move left.
- `D` : Move right.
- `Q` : Quit the game.
- Any key : Start the game.

## Technologies Used

- **Programming Language:** C
- **IDE / Code Editor:** Dev-C++ / Visual Studio Code
- **Operating System:** Windows
- **Header Files:** stdio.h, stdlib.h, conio.h, windows.h, time.h

## Code Structure

- **main():** Handles game initialization, player movement, obstacle generation, collision detection, score tracking, and game termination.
- **droad():** Displays the road, player car, obstacles, and current score in the console.
- **savescore():** Saves the new high score in a text file.

## Programming Concepts Used

- Two-dimensional arrays- Loops and conditional statements- User-defined functions- Random number generation- Keyboard input handling- File handling- Variables and data types

## How to Run the Game

1. Open the project in Dev-C++ or Visual Studio Code with a suitable C compiler.
2. Make sure the required Windows-compatible header files and compiler settings are available.
3. Compile and run the C program.
4. Press any key to start playing.
5. Use `A` and `D` to move between lanes and avoid obstacles.
6. Press `Q` to quit the game.
