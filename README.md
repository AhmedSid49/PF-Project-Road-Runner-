# ROAD RUNNER – PF Project

## Section A: Project Introduction

Road Runner is a car dodging game made in C where a user controls a car across three lanes and avoid incoming obstacles. Using simple keyboard controls, users must dodge obstacles, survive as long as possible, and achieve a high score. The game consists of random obstacle generation, collision detection, score tracking, and high score saving.

## Section B: Features & Test Cases (Execution Scenarios)

### Case 1: Game Initialization & High Score Display

- **Description:** Tests whether the game starts correctly, displays the game title, and retrieves the previously saved high score from the file.
- **Inputs:** Press any key to start the game.
- **Expected Output:** The game displays the title "ROAD RUNNER", the saved high score (if available), and the keyboard controls.
- **Screenshot:**  <img width="402" height="182" alt="image" src="https://github.com/user-attachments/assets/73c13bc4-98ac-4d23-9c63-adc186f7eaac" />



### Case 2: Player Car Movement

- **Description:** Tests the player's ability to move the car between the three available lanes using keyboard controls.
- **Inputs:** Press `a` to move left and `d` to move right.
- **Expected Output:** The player's car (`a`) moves between the three lanes. The car cannot move beyond the leftmost or rightmost lane.
- **Screenshot:** <img width="173" height="377" alt="image" src="https://github.com/user-attachments/assets/ab50a309-590a-4c31-b13c-4fd5637b9cf5" />



### Case 3: Random Obstacle Generation

- **Description:** Tests the random generation and downward movement of obstacles on the road.
- **Inputs:** Start the game and allow the obstacle to move down the road.
- **Expected Output:** An obstacle (`X`) appears in a randomly selected lane and moves downward towards the player's car. Once it reaches the bottom, another obstacle is generated in a random lane.
- **Screenshot:** <img width="165" height="105" alt="image" src="https://github.com/user-attachments/assets/d82b74b7-25ee-4b45-8fab-e5c489ef7ea9" />



### Case 4: Collision Detection & Game Over

- **Description:** Tests whether the game correctly detects a collision when the player's car and an obstacle occupy the same lane at the same position.
- **Inputs:** Allow an obstacle to reach the player's car without moving to another lane.
- **Expected Output:** The game ends and displays "GAME OVER. Nice Try!" along with the player's final score.
- **Screenshot:** <img width="266" height="85" alt="image" src="https://github.com/user-attachments/assets/1e57d87d-c75b-4297-b5bc-d2a32dee9f8a" />



### Case 5: Score Tracking

- **Description:** Tests whether the player's score increases after successfully avoiding an obstacle.
- **Inputs:** Avoid an obstacle until it passes the player's car.
- **Expected Output:** The score increases by 10 points whenever an obstacle successfully passes the player.
- **Screenshot:** <img width="168" height="145" alt="image" src="https://github.com/user-attachments/assets/5b1d2b6b-bacf-4475-9f64-945b8ec2be4f" />




### Case 6: High Score Saving & Updating

- **Description:** Tests the program's ability to compare the current score with the previously saved high score and update it when a new record is achieved.
- **Inputs:** Complete a game with a score higher than the previously saved high score.
- **Expected Output:** The game displays "NEW HIGH SCORE!" and saves the updated score in `highscore.txt`. If the previous high score is higher, it remains unchanged.
- **Screenshot:** <img width="207" height="57" alt="image" src="https://github.com/user-attachments/assets/2d884be6-ccae-490b-9821-f897ba6c8ee0" />


### Case 7: Quit Game

- **Description:** Tests whether the player can exit the game using the designated quit key.
- **Inputs:** Press `Q` during gameplay.
- **Expected Output:** The current game session ends and the final score is displayed.
- **Screenshot:** <img width="295" height="132" alt="image" src="https://github.com/user-attachments/assets/6385c1bf-7bad-41e8-a0e4-51b20ed90b89" />


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
