#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {

    printf("Hello and welcome to Tic-Tac-Toe!  With your host... Chaaaaaaaalupaaa Jack!!\n");
    printf("Would you like to be PlayerX [1] or PlayerO [2]\n");
    printf("This does not affect who goes first (it is random)!\n");

    int play_sel = 1;

    do {

        printf("Player selection ([1]X or [2]O): ");
        scanf("%d", &play_sel);

    } while(play_sel != 1 && play_sel != 2);

    printf("Aaaaannnnnnnnnddddd here's the BOARD!\n");
    printf("Use these numbers to pick your moves!\n");
    printf("Now the fun part, let me pick a player from may hat to see who goes first.\n");
    int first = rand() % 2 + 1;
    printf("Aaaaannnndd it's Player %d! Wow!\n", first);

    char board[3][3];
    int counter = 1;
    for (int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            board[row][col] = counter + '0';
            printf("|");
            printf("%c", board[row][col]);
            printf("|");
            if (col == 2)
            {
                printf("\n");
            }
            counter++;
        }
    }





    bool game_over = false;
    int turn = first;
    int move = 0;
    int turn_count = 0;

    while(turn_count < 9)
    {
        
        if (turn == 1)
        {
            printf("OK, it's Player 1's turn to move!  Enter a number for a square: ");
            scanf("%d", &move);
            if (move % 3 == 0)
            {
                if (move == 3)
                {
                    board[0][2] = 'X';
                }
                else if (move == 6)
                {
                    board[1][2] = 'X';
                }
                else if (move == 9)
                {
                    board[2][2] = 'X';
                }
            }
            else if (move % 3 == 2)
            {
                if (move == 8)
                {
                    board[2][1] = 'X';
                }
                else if (move == 5)
                {
                    board[1][1] = 'X';
                }
                else if (move == 2)
                {
                    board[0][1] = 'X';
                }
            }
            else if (move % 3 == 1)
            {
                if (move == 7)
                {
                    board[2][0] = 'X';
                }
                else if (move == 4)
                {
                    board[1][0] = 'X';
                }
                else if (move == 1)
                {
                    board[0][0] = 'X';
                }
            }
            turn = 2;
            turn_count++;



        }
        else if (turn == 2)
        {
            printf("OK, it's Player 2's turn to move!  Enter a number for a square: ");
            scanf("%d", &move);
            if (move % 3 == 0)
            {
                if (move == 3)
                {
                    board[0][2] = 'O';
                }
                else if (move == 6)
                {
                    board[1][2] = 'O';
                }
                else if (move == 9)
                {
                    board[2][2] = 'O';
                }
            }
            else if (move % 3 == 2)
            {
                if (move == 8)
                {
                    board[2][1] = 'O';
                }
                else if (move == 5)
                {
                    board[1][1] = 'O';
                }
                else if (move == 2)
                {
                    board[0][1] = 'O';
                }
            }
            else if (move % 3 == 1)
            {
                if (move == 7)
                {
                    board[2][0] = 'O';
                }
                else if (move == 4)
                {
                    board[1][0] = 'O';
                }
                else if (move == 1)
                {
                    board[0][0] = 'O';
                }
            }
            turn = 1;
            turn_count++;
        }

        for (int row = 0; row < 3; row++)
        {
            for(int col = 0; col < 3; col++)
            {
                printf("|");
                printf("%c", board[row][col]);
                printf("|");
                if (col == 2)
                {
                    printf("\n");
                }
                counter++;
            }
        }
    }

    return 0;
}