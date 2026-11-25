#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void droad(char road[12][3], int score);
void savescore(int score);

int main() {
char road[12][3];
int car = 1, obs, obsrow = 0, score = 0, highscore = 0, i, j;
srand(time(0));
obs = rand() % 3;
FILE *file = fopen("highscore.txt", "r");
if (file != NULL) {
fscanf(file, "%d", &highscore);
fclose(file);
}
printf("\033[93m****ROAD RUNNER****\n");
printf("\nHigh Score: %d\n", highscore);
printf("\na = Left | d = Right | q = Quit\n");
printf("\nPress any key to start.");
_getch();
system("cls");
setvbuf(stdout, NULL, _IOFBF, 4096);
while (1) {
if (_kbhit()) {
char key = _getch();
if ((key == 'a' || key == 'A') && car > 0) {
car--;
}
if ((key == 'd' || key == 'D') && car < 2) {
car++;
}
if (key == 'q' || key == 'Q') {
break;
}
}
for (i=0; i<12; i++) {
for (j=0; j<3; j++) {
road[i][j] = ' ';
}
}
road[obsrow][obs] ='X';
road[11][car] ='A';
droad(road, score);
if (obsrow == 11 && car == obs) {
break;
}
obsrow++;
if (obsrow == 12) {
obsrow = 0;
obs = rand() % 3;
score += 10;
}
Sleep(150);
}
system("cls");
printf("\033[91mGAME OVER. Nice Try!\n");
printf("Your Score: %d\n", score);
if (score > highscore) {
printf("NEW HIGH SCORE!\n");
savescore(score);
} else {
printf("High Score: %d\n", highscore);
}
printf("\nPress any key to exit.");
fflush(stdout);
_getch();
printf("\033[0m");
return 0;
}

void droad(char road[12][3], int score) {
int i, j;
printf("\033[H");
printf("\033[93mROAD RUNNER\n");
printf("Score: %d\n", score);
printf("*************\n");
for (i=0; i<12; i++) {
printf("|");
for (j=0; j<3; j++) {
if (road[i][j] == 'X') printf("\033[91m");
if (road[i][j] == 'A') printf("\033[92m");
printf(" %c \033[93m|", road[i][j]);
}
printf("\n");
}
printf("*************\n");
fflush(stdout);
}

void savescore(int score) {
FILE *file;
file = fopen("highscore.txt", "w");
if (file != NULL) {
fprintf(file, "%d", score);
fclose(file);
}
}
