char* tictactoe(int** moves, int movesSize, int* movesColSize) 
{
    char board[3][3] = {{0},{0},{0}};

    // fill board
    for(int i=0; i<movesSize; i++)
    {
        int row = moves[i][0];
        int col = moves[i][1];

        if(i%2==0)
        board[row][col] = 'X';
        else
        board[row][col] = 'O';
    }

    // check row
    for(int i=0; i<3; i++)
    {
        if(board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
        if(board[i][0] == 'X')
            return "A";
        else
            return "B";
        }
    }

    //check column
    for(int i=0; i<3; i++)
    {
        if(board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
        if(board[0][i] == 'X')
            return "A";
        else
            return "B";
        }
    }

    //check both diagonal
    if(board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
    {
        if(board[0][0] == 'X')
            return "A";
        else
            return "B";
    }
    if(board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
    {
        if(board[0][2] == 'X')
            return "A";
        else
            return "B";
    }

    if(movesSize==9) return "Draw";
    return "Pending";
}