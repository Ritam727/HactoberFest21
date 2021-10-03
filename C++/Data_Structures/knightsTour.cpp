#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define lld long long int

int board[8][8] = {0};
int moveX[] = {  2, 1, -1, -2, -2, -1, 1, 2};
int moveY[] = { 1, 2, 2, 1, -1, -2, -2, -1 };


void print() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << setw(2) << board[i][j] << "  ";
		cout << endl;
	}
}

bool isValid(int x, int y) {
	if (x >= 0 && x < 8 && y >= 0 && y < 8) {
		return board[x][y] == -1;
	}

	return 0;
}

int nextMove(int currX, int currY, int cnt) {

	// print();
	// cout << endl;

	if (cnt == 64)
		return 1;


	for (int i = 0; i < 8; i++) {
		int nextX = currX + moveX[i];
		int nextY = currY + moveY[i];
		if (isValid(nextX, nextY)) {
			board[nextX][nextY] = cnt;

			if (nextMove(nextX, nextY, cnt + 1)) {
				return 1;
			}
			else {
				board[nextX][nextY] = -1;
			}
		}
	}

	return 0;
}


int main () {

	int cnt = 1;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			board[i][j] = -1;
	}
	board[0][0] = 0;
	if (nextMove(0, 0, cnt)) {
		print();
	}
	else {
		cout << "nah " << endl;
	}


}
