#include <iostream>
using namespace std;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';
int n;
void drawBoard() {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void input() {
	int a;
	cout << "Enter the number of the field: ";
	cin >> a;
	if (a == 1) {
		if (board[0][0] == '1') {
			board[0][0] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 2) {
		if (board[0][1] == '2') {
			board[0][1] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 3) {
		if (board[0][2] == '3') {
			board[0][2] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 4) {
		if (board[1][0] == '4') {
			board[1][0] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 5) {
		if (board[1][1] == '5') {
			board[1][1] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 6) {
		if (board[1][2] == '6') {
			board[1][2] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 7) {
		if (board[2][0] == '7') {
			board[2][0] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 8) {
		if (board[2][1] == '8') {
			board[2][1] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	else if (a == 9) {
		if (board[2][2] == '9') {
			board[2][2] = player;
		}
		else {
			cout << "Field is already occupied!" << endl;
			input();
		}
	}
	}
void togglePlayer() {}
void win() {
	if (board[0][0] == player && board[0][1] == player && board[0][2] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[1][0] == player && board[1][1] == player && board[1][2] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[2][0] == player && board[2][1] == player && board[2][2] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[0][0] == player && board[1][0] == player && board[2][0] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[0][1] == player && board[1][1] == player && board[2][1] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[0][2] == player && board[1][2] == player && board[2][2] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
	else if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
		cout << "Player " << player << " wins!" << endl;
		n = 1;
	}
}
int main() {
cout << "===== Tic Tac Toe Game =====" << endl;
	cout<<"player 1 is X and player 2 is O" << endl;
	drawBoard();
	while (1) {
		n = 0;
		input();
		drawBoard();
		win();
		if (n == 1) {
			break;
		}
		if (player == 'X') {
			player = 'O';
		}
		else {
			player = 'X';
		}
	}
}
