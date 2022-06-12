#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void setRandom() {
	srand(time(0));
	for (int i = 0; i < 1000; i++) {
		srand(rand());
	}
}

int ai(string bd) {
	int counter = 0;
	for (char c : bd) {
		if (c != '.') {
			counter++;
		} 
	}
	if (counter == 1) {
		if (bd[4] == 'X') {
			return 6;
		}
		else {
			return 4;
		}
	}
	if (bd[0] == 'O' and bd[1] == 'O' and bd[2] != 'X') return 2;
	if (bd[0] == 'O' and bd[2] == 'O' and bd[1] != 'X') return 1;
	if (bd[1] == 'O' and bd[2] == 'O' and bd[0] != 'X') return 0;
	if (bd[3] == 'O' and bd[4] == 'O' and bd[5] != 'X') return 5;
	if (bd[3] == 'O' and bd[5] == 'O' and bd[4] != 'X') return 4;
	if (bd[4] == 'O' and bd[5] == 'O' and bd[3] != 'X') return 3;
	if (bd[6] == 'O' and bd[7] == 'O' and bd[8] != 'X') return 8;
	if (bd[6] == 'O' and bd[8] == 'O' and bd[7] != 'X') return 7;
	if (bd[7] == 'O' and bd[8] == 'O' and bd[6] != 'X') return 6;
	if (bd[0] == 'O' and bd[3] == 'O' and bd[6] != 'X') return 6;
	if (bd[0] == 'O' and bd[6] == 'O' and bd[3] != 'X') return 3;
	if (bd[3] == 'O' and bd[6] == 'O' and bd[0] != 'X') return 0;
	if (bd[1] == 'O' and bd[4] == 'O' and bd[7] != 'X') return 7;
	if (bd[1] == 'O' and bd[7] == 'O' and bd[4] != 'X') return 4;
	if (bd[4] == 'O' and bd[7] == 'O' and bd[1] != 'X') return 1;
	if (bd[2] == 'O' and bd[5] == 'O' and bd[8] != 'X') return 8;
	if (bd[2] == 'O' and bd[8] == 'O' and bd[5] != 'X') return 5;
	if (bd[5] == 'O' and bd[8] == 'O' and bd[2] != 'X') return 2;
	if (bd[0] == 'O' and bd[4] == 'O' and bd[8] != 'X') return 8;
	if (bd[0] == 'O' and bd[8] == 'O' and bd[4] != 'X') return 4;
	if (bd[4] == 'O' and bd[8] == 'O' and bd[0] != 'X') return 0;
	if (bd[2] == 'O' and bd[4] == 'O' and bd[6] != 'X') return 6;
	if (bd[2] == 'O' and bd[6] == 'O' and bd[4] != 'X') return 4;
	if (bd[4] == 'O' and bd[6] == 'O' and bd[2] != 'X') return 2;
	if (bd[0] == 'X' and bd[1] == 'X' and bd[2] != 'O') return 2;
	if (bd[0] == 'X' and bd[2] == 'X' and bd[1] != 'O') return 1;
	if (bd[1] == 'X' and bd[2] == 'X' and bd[0] != 'O') return 0;
	if (bd[3] == 'X' and bd[4] == 'X' and bd[5] != 'O') return 5;
	if (bd[3] == 'X' and bd[5] == 'X' and bd[4] != 'O') return 4;
	if (bd[4] == 'X' and bd[5] == 'X' and bd[3] != 'O') return 3;
	if (bd[6] == 'X' and bd[7] == 'X' and bd[8] != 'O') return 8;
	if (bd[6] == 'X' and bd[8] == 'X' and bd[7] != 'O') return 7;
	if (bd[7] == 'X' and bd[8] == 'X' and bd[6] != 'O') return 6;
	if (bd[0] == 'X' and bd[3] == 'X' and bd[6] != 'O') return 6;
	if (bd[0] == 'X' and bd[6] == 'X' and bd[3] != 'O') return 3;
	if (bd[3] == 'X' and bd[6] == 'X' and bd[0] != 'O') return 0;
	if (bd[1] == 'X' and bd[4] == 'X' and bd[7] != 'O') return 7;
	if (bd[1] == 'X' and bd[7] == 'X' and bd[4] != 'O') return 4;
	if (bd[4] == 'X' and bd[7] == 'X' and bd[1] != 'O') return 1;
	if (bd[2] == 'X' and bd[5] == 'X' and bd[8] != 'O') return 8;
	if (bd[2] == 'X' and bd[8] == 'X' and bd[5] != 'O') return 5;
	if (bd[5] == 'X' and bd[8] == 'X' and bd[2] != 'O') return 2;
	if (bd[0] == 'X' and bd[4] == 'X' and bd[8] != 'O') return 8;
	if (bd[0] == 'X' and bd[8] == 'X' and bd[4] != 'O') return 4;
	if (bd[4] == 'X' and bd[8] == 'X' and bd[0] != 'O') return 0;
	if (bd[2] == 'X' and bd[4] == 'X' and bd[6] != 'O') return 6;
	if (bd[2] == 'X' and bd[6] == 'X' and bd[4] != 'O') return 4;
	if (bd[4] == 'X' and bd[6] == 'X' and bd[2] != 'O') return 2;
	int temp;
	do {
		temp = (rand() % 10) * 9 / 10;
	} while (not (bd[temp] == '.'));
	return temp;
}

string board = ".........";

void printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i * 3 + j];
		}
		puts("");
	}
}

int main() {
	setRandom();
	int n, co;
	while (true) {
		co = 0;
		printBoard();
		do {
			printf("Enter the location you want to put your X (1-9): ");
			cin >> n;
		} while ((board[n - 1] == 'X') or (board[n - 1] == 'O'));
		board[n - 1] = 'X';
		if ((board[0] == 'X' and board[1] == 'X' and board[2] == 'X') or 
		(board[3] == 'X' and board[4] == 'X' and board[5] == 'X') or 
		(board[6] == 'X' and board[7] == 'X' and board[8] == 'X') or 
		(board[0] == 'X' and board[3] == 'X' and board[6] == 'X') or 
		(board[1] == 'X' and board[4] == 'X' and board[7] == 'X') or 
		(board[2] == 'X' and board[5] == 'X' and board[8] == 'X') or 
		(board[0] == 'X' and board[4] == 'X' and board[8] == 'X') or 
		(board[2] == 'X' and board[4] == 'X' and board[6] == 'X')) {
			printBoard();
			puts("You win!");
			return 0;
		}
		for (char c : board) {
			if (c == '.') {
				co++;
			}
		}
		if (co == 0) {
			printBoard();
			puts("It's a draw!");
			return 0;
		}
		board[ai(board)] = 'O';
		if ((board[0] == 'O' and board[1] == 'O' and board[2] == 'O') or 
		(board[3] == 'O' and board[4] == 'O' and board[5] == 'O') or 
		(board[6] == 'O' and board[7] == 'O' and board[8] == 'O') or 
		(board[0] == 'O' and board[3] == 'O' and board[6] == 'O') or 
		(board[1] == 'O' and board[4] == 'O' and board[7] == 'O') or 
		(board[2] == 'O' and board[5] == 'O' and board[8] == 'O') or 
		(board[0] == 'O' and board[4] == 'O' and board[8] == 'O') or 
		(board[2] == 'O' and board[4] == 'O' and board[6] == 'O')) {
			printBoard();
			puts("You lose!");
			return 0;
		}
	}
}
