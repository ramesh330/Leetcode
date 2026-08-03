bool isValidSudoku(char** board, int boardSize, int* boardColSize) 
{
    for(int i=0; i<9; i++)
    for(int j=0; j<9; j++)
    for(int k=j; k<8; k++)
    {
        if(board[i][j] != '.' && board[i][k+1] != '.' && board[i][j] == board[i][k+1])
        return false;
        if(board[j][i] != '.' && board[k+1][i] != '.' && board[j][i] == board[k+1][i])
        return false;
    }
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    {
        int arr[9];
        int count=0;

        for(int r=i*3; r<i*3+3; r++)
        for(int c=j*3; c<j*3+3; c++)
        {
            if(board[r][c] == '.')
            continue;

            for(int k=0; k<count; k++)
            {
                if(arr[k] == board[r][c])
                return false;
            }
            arr[count++] = board[r][c];
        }
    }
    return true;
}