#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define lld long long int
#define N 4

int ans[N][N] = {0};
int moveX[] = {0, 1};
int moveY[] = {1, 0};

void print() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << setw(2) << ans[i][j] << " ";
		cout << endl;
	}

}

bool isValid(int x, int y, int maze[N][N]) {
	if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && ans[x][y] == 0)
		return 1;
	return 0;
}

void nextMove(int currX, int currY, int maze[N][N], int &total) {

	if (currX == N - 1 && currY == N - 1 && maze[N - 1][N - 1] == 1) {
		total++;
		return;
	}

	for (int i = 0; i < 2; i++) {
		int nextX = currX + moveX[i];
		int nextY = currY + moveY[i];

		if (isValid(nextX, nextY, maze)) {
			ans[nextX][nextY] = 1;
			nextMove(nextX, nextY, maze, total);

			ans[nextX][nextY] = 0;
		}
	}

}

int main () {

	int maze[N][N] = {{1,  1, 1, 1},
		{1, 0, 1, 1},
		{ 0, 1, 1, 1},
		{1,  1, 1, 1}
	};

	ans[0][0] = 1;
	int total = 0;
	nextMove(0, 0, maze, total);
	cout << total << endl;


}
