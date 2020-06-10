#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// calls replay to make it accessable to functions created before replay()
int replay();
// prints the board
void printboard(char b[][3], int size)
{
    printf("%c|%c|%c\n", b[0][0], b[0][1], b[0][2]);
    printf("_ _ _\n");
    printf("%c|%c|%c\n", b[1][0], b[1][1], b[1][2]);
    printf("_ _ _\n");
    printf("%c|%c|%c\n", b[2][0], b[2][1], b[2][2]);
    return;
}
// initializes variable used in while loop
int keepPlaying = 1;
// main function
int main(void)
{
    // loop created to make game loop
    while (keepPlaying == 1)
    {
        // initialzing different variables used in main()
        char board[3][3];
        char player = 'x';
        int x;
        int y;
        int square;
        // initialy populates board
        for (x = 0; x <= 2; ++x)
        {
            for (y = 0; y <= 2; ++y)
            {
                board[x][y] = 'b';
            }
        }
        while (1)
        {
            // print and prompt game
            printf("pick a square 1-9: ");
            scanf("%d", &square);
            // alters board to populate the board with user inputs i.e. (x,o)
            switch (square)
            {
            case 1:
                board[0][0] = player;
                break;
            case 2:
                board[0][1] = player;
                break;
            case 3:
                board[0][2] = player;
                break;
            case 4:
                board[1][0] = player;
                break;
            case 5:
                board[1][1] = player;
                break;
            case 6:
                board[1][2] = player;
                break;
            case 7:
                board[2][0] = player;
                break;
            case 8:
                board[2][1] = player;
                break;
            case 9:
                board[2][2] = player;
                break;
            }
            // checks win by checking coordinates and position of users (x,o)
            if ((board[0][0] == player & board[0][1] == player & board[0][2] == player) ||
                (board[1][0] == player & board[1][1] == player & board[1][2] == player) ||
                (board[2][0] == player & board[2][1] == player & board[2][2] == player) ||
                (board[0][0] == player & board[1][0] == player & board[2][0] == player) ||
                (board[0][1] == player & board[1][1] == player & board[2][1] == player) ||
                (board[0][2] == player & board[1][2] == player & board[2][2] == player) ||
                (board[0][0] == player & board[1][1] == player & board[2][2] == player) ||
                (board[0][2] == player & board[1][1] == player & board[2][0] == player))
            {
                // prints the win
                printf("\n%c just won\n", player);
                // prompts the play again series, replay()
                keepPlaying = replay();
                // reprints the board if replay
                for (x = 0; x <= 2; ++x)
                {
                    for (y = 0; y <= 2; ++y)
                    {
                        board[x][y] = 'b';
                    }
                }
            }

            //winner logic
            if (player == 'x')
                player = 'o';
            else
                player = 'x';

            printboard(board, 3);

        } //ends while loop
        return 0;
    }
}
// creates replay function to prompt play again
int replay()
{
    char answer;
    printf("\nCongrats, you won! Do you want to play again? y/n ");
    // eats "[enter]" input absorbed from scanf
    scanf("%c", &answer);
    printf("\n");
    // actual user prompt to play again
    scanf("%c", &answer);
    // series of if statements to register user input as replay or stop
    if (answer == 'y')
    {
        return 1;
    }
    else if (answer == 'n')
    {
        printf("Well, it was fun! Goodbye!");
        keepPlaying = 0;
        exit(0);
    }
    // extra statement to help user error
    else if (answer != 'y' || answer != 'n')
    {
        printf("That is not a valid response, try again.");
        return replay();
    }
    return 0;
}
