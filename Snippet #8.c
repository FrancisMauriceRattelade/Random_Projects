#include <stdio.h>
#include <stdlib.h>

// initializing int variable
int fillit(char in[][3], int);

// initializing the main function
int main(void)
{
    // defining variables
    int ok;
    int ct, ct2;
    // setting size of board
    char board[3][3] = {NULL};
    ok = fillit(board, 3);

    for (ct = 0; ct <= 2; ++ct)
    {
        for (ct2 = 0; ct2 <= 2; ++ct2)
        {
            // Prints a row of the board
            printf("%c ", board[ct][ct2]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
int fillit(char in[][3], int x)
{
    // defining variables
    int ct, ct2, value;

    value = 48;
    // sets row number
    for (ct = 0; ct <= 2; ++ct)
    {
        // sets column number
        for (ct2 = 0; ct2 <= 2; ++ct2)
        {
            // sets the value of the char
            in[ct][ct2] = value += 1;
        }
    }
    return 0;
}
