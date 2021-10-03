//Max number of columns possible
#define MAXC 1001
//Used to denote if the vertex is not present in the row or column
#define MAXV 1001
//We need to do a lot of pre-computation in this problem. We need to know that what are the first and last column a color appears
//Also we need to know for each column we need to know what are the starting and ending rows for each of the colors. The reason
//For each column we will need the max base length possible and the maximum height possible with different colored vertex

//This is to store the first occurence of a color (stores the first column number)
vector<int> Left(3, MAXV);

//This is to store the last occurence of a color (stores the last column number)
vector<int> Right(3, -MAXV);

//For each column we need to store the start point of each color
vector<vector<int> > top(3, vector<int>(MAXC, MAXV));
//top[i][j] means start index of ith color in the jth column, row index

//For each column we need to store the end point of each color
vector<vector<int> > bottom(3, vector<int>(MAXC, -MAXV));
//bottom[i][j] means ending index of ith color in the jth column, row index

//We can map r,g and b to 0,1, and 2
int mapping(char c) {
    if (c == 'r')
        return 0;
    else if (c == 'g')
        return 1;
    else if (c == 'b')
        return 2;
}

//We do all the precomputing in this fucntion
void precompute(vector<string> &mat, int R, int C) {
    //This loop will store the global starting and ending index (column)
    //Will be useful when calculating the height of the triangle
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            //Stores global starting index of every color
            Left[mapping(mat[i][j])] = min(Left[mapping(mat[i][j])], j);
            //Stores global ending index of every color
            Right[mapping(mat[i][j])] = max(Right[mapping(mat[i][j])], j);
        }
    }
    //Now calculating start and end of every color for every column
    for (int j = 0; j < C; j++)
    {
        for (int i = 0; i < R; i++)
        {
            //Storing starting row of every color for every column
            top[mapping(mat[i][j])][j] = min(i, top[mapping(mat[i][j])][j]);
            //Storing ending row of every color for every column
            bottom[mapping(mat[i][j])][j] = max(i, bottom[mapping(mat[i][j])][j]);
        }
    }
    //Now precomputing is done and we have that we need to find the max area triangle
}

//Calculating max area
int max_area(vector<string> &mat, int R, int C) {
    double area = -0.0;
    //We will check for each column and in each column we will check for each vertex color combination and store the max area
    int i;
    //i will be used to denote the current column under view
    int s1, s2;
    //s1 and s2 are used to denote the base vertices (side || to y-axis)
    for (i = 0; i < C; i++)
    {
        for (s1 = 0; s1 < 3; s1++)
        {
            for (s2 = 0; s2 < 3; s2++)
            {
                //s3 is used to get the vertex of the tip
                int s3 = 3 - s1 - s2;
                //Checking for triangle with tip Left of base
                if ((s1 != s2) && (top[s1][i] != MAXV) && (bottom[s2][i] != -MAXV) && (Left[s3] != MAXV))
                {
                    area = max(double((bottom[s2][i] - top[s1][i] + 1) * (i - Left[s3] + 1) * 0.5), area);
                    //cout<<area<<" "<<bottom[s2][i]<<" "<< i-Left[s3]<<" "<<top[s1][i]<<endl;
                }
                //Checking for triangle with tip Right of base
                if ((s1 != s2) && (top[s1][i] != MAXV) && (bottom[s2][i] != -MAXV) && (Right[s3] != -MAXV))
                {
                    area = max(double((1 + bottom[s2][i] - top[s1][i]) * (1 + Right[s3] - i) * 0.5), area);
                    //cout<<area<<" "<<bottom[s2][i]<<" "<< Right[s3]-i<<" "<<top[s1][i]<<endl;
                }
            }
        }
    }
    return (ceil(area));
}
int Solution::solve(vector<string> &mat) {
    int r = mat.size();
    int c = mat[0].size();
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            top[i][j] = MAXV;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < c; j++)
            bottom[i][j] = -MAXV;

    }

    for (int i = 0; i < 3; i++)
        Left[i] = MAXV;

    for (int i = 0; i < 3; i++)
        Right[i] = -MAXV;

    precompute(mat, r, c);
    return max_area(mat, r, c);
}