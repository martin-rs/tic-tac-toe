/*

   - Tic, Tac, Toe.
   - Played on a 3x3 grid.
   - Played by two (human) players.

 */

#include <stdio.h>
#include <stdlib.h>

void checkForWin(char player1, char player2, char grid[10]);
void drawBoard(char grid[10]);
void markBoard(char player1, char player2, char grid[10]);

int main() {

	char player1 = 'x';
	char player2 = 'o';

	char grid[10] = {[1] = '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	drawBoard(grid);
	while (1) {
		markBoard(player1, player2, grid);
		system("clear");
		drawBoard(grid);
		checkForWin(player1, player2, grid);
	}

	return 0;
}

// Checks to see if a player has won or the game is a draw.
void checkForWin(char player1, char player2, char grid[10]) {
	// Player 1 check.
	if (grid[1] == player1 && grid[4] == player1 && grid[7] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[1] == player1 && grid[2] == player1 && grid[3] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[4] == player1 && grid[5] == player1 && grid[6] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[7] == player1 && grid[8] == player1 && grid[9] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[2] == player1 && grid[5] == player1 && grid[8] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[3] == player1 && grid[6] == player1 && grid[9] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[1] == player1 && grid[5] == player1 && grid[9] == player1) {
		puts("Player 1 wins!");
		exit(0);
	} else if (grid[3] == player1 && grid[5] == player1 && grid[7] == player1) {
		puts("Player 1 wins!");
		exit(0);
	}

	// Player 2 check.
	if (grid[1] == player2 && grid[4] == player2 && grid[7] == player2) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[1] == player2 && grid[2] == player2 && grid[3] == player2) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[4] == player2 && grid[5] == player2 && grid[6] == player2) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[7] == player1 && grid[8] == player1 && grid[9] == player1) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[2] == player2 && grid[5] == player2 && grid[8] == player2) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[3] == player2 && grid[6] == player2 && grid[9] == player2) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[1] == player2 && grid[5] == player2 && grid[9] == player2) {
		puts("Player 2 wins!");
		exit(0);
	} else if (grid[3] == player2 && grid[5] == player2 && grid[7] == player2) {
		puts("Player 2 wins!");
		exit(0);
	}

	// Check for draw.
	if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && grid[4] != '4' &&
	grid[5] != '5' && grid[6] != '6' && grid[7] != '7' && grid[8] != '8' &&
	grid[9] != '9') {
	puts("It's a draw!");
	exit(0);
	}
}

// Redraws the board for each player turn.
void drawBoard(char grid[10]) {

	printf("\n\tTic Tac Toe\n\nPlayer 1 (x)  -  Player 2 (o)\n\n");

	for (int i = 1; i < 4; i++)
		printf("%c\t", grid[i]);
	puts("\n");
	for (int i = 4; i < 7; i++)
		printf("%c\t", grid[i]);
	puts("\n");
	for (int i = 7; i < 10; i++)
		printf("%c\t", grid[i]);
	puts("\n");
}

// Sets the char array with a selection and check for an invalid selection.
void markBoard(char player1, char player2, char grid[10]) {

	int player1Choice;
	int player2Choice;

	// Player 1
	printf("Player 1: ");
	scanf("%d", &player1Choice);
	if (player1Choice == 1 || player1Choice == 2 || player1Choice == 3 ||
		player1Choice == 4 || player1Choice == 5 || player1Choice == 6 ||
		player1Choice == 7 || player1Choice == 8 || player1Choice == 9) {
		grid[player1Choice] = player1;
	} else {
		puts("Not a valid option.");
		getchar();
	}

	// Player 2
	printf("Player 2: ");
	scanf("%d", &player2Choice);
	if (player2Choice == 1 || player2Choice == 2 || player2Choice == 3 ||
	player2Choice == 4 || player2Choice == 5 || player2Choice == 6 ||
	player2Choice == 7 || player2Choice == 8 || player2Choice == 9) {
	    grid[player2Choice] = player2;
	} else {
	    puts("Not a valid option.");
	    getchar();
	}
}
