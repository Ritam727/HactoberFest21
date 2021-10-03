bool isValid(int row, int col, int num, vector<vector<char> > grid) {
    int N = grid.size();

    for (int i = 0; i < N; i++) {
        if (grid[i][col] == num + '0')
            return false;
    }

    for (int j = 0; j < N; j++) {
        if (grid[row][j] == num + '0')
            return false;
    }

    int rowBlock = row / 3;
    int colBlock = col / 3;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[rowBlock * 3 + i][colBlock * 3 + j] == num + '0')
                return false;
        }
    }

    return true;
}


bool nextComb(int row, int col, vector<vector<char>> &grid) {

    int N = grid.size();

    if (col == N)
        return true;


    for (int num = 1; num <= 9; num++) {

        if (grid[row][col] != '.')
            return (row == N - 1) ? nextComb(0, col + 1, grid) : nextComb(row + 1, col, grid);

        if (isValid(row, col, num, grid)) {
            grid[row][col] = num + '0';

            if (row == N - 1) {
                if (nextComb(0, col + 1, grid))
                    return true;

                else
                    grid[row][col] = '.';
            }

            else {
                if (nextComb(row + 1, col, grid))
                    return true;

                else
                    grid[row][col] = '.';

            }
        }
    }


    return false;
}

void Solution::solveSudoku(vector<vector<char> > &grid) {

    bool temp = nextComb(0, 0, grid);




}

// with hashmap


class Solution
{
public:

    unordered_map<int, bool> rowHash[N], colHash[N];

    unordered_map<int, bool> subSudoku[N][N];


    bool isValid(int row, int col, int num, int grid[N][N]) {

        if (rowHash[row][num])
            return false;

        // for (int i = 0; i < N; i++) {
        //     if (grid[i][col] == num)
        //         return false;
        // }

        if (colHash[col][num])
            return false;

        // for (int j = 0; j < N; j++) {
        //     if (grid[row][j] == num)
        //         return false;
        // }

        int rowBlock = row / 3;
        int colBlock = col / 3;

        if (subSudoku[rowBlock][colBlock][num])
            return false;


        // for (int i = 0; i < 3; i++) {
        //     for (int j = 0; j < 3; j++) {
        //         if (grid[rowBlock * 3 + i][colBlock * 3 + j] == num)
        //             return false;
        //     }
        // }

        return true;
    }


    bool nextComb(int row, int col, int grid[N][N]) {

        if (col == N)
            return true;


        for (int num = 1; num <= 9; num++) {

            if (grid[row][col]) {
                return (row == N - 1) ? nextComb(0, col + 1, grid) : nextComb(row + 1, col, grid);
            }
            if (isValid(row, col, num, grid)) {
                grid[row][col] = num;
                rowHash[row][num] = 1;
                colHash[col][num] = 1;
                subSudoku[row / 3][col / 3][num] = 1;

                if (row == N - 1) {
                    if (nextComb(0, col + 1, grid))
                        return true;

                    else {
                        grid[row][col] = 0;
                        rowHash[row][num] = 0;
                        colHash[col][num] = 0;
                        subSudoku[row / 3][col / 3][num] = 0;

                    }
                }

                else {
                    if (nextComb(row + 1, col, grid))
                        return true;

                    else {
                        grid[row][col] = 0;
                        rowHash[row][num] = 0;
                        colHash[col][num] = 0;
                        subSudoku[row / 3][col / 3][num] = 0;

                    }

                }
            }
        }


        return false;
    }
    //Function to find a solved Sudoku.
    bool SolveSudoku(int grid[N][N])
    {

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (grid[i][j]) {
                    rowHash[i][grid[i][j]] = 1;
                    colHash[j][grid[i][j]] = 1;
                    subSudoku[i / 3][j / 3][grid[i][j]] = 1;
                }
            }
        }
        return nextComb(0, 0, grid);

    }

    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N])
    {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << grid[i][j] << " ";
            }
        }
    }
};