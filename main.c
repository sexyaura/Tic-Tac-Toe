#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void displayBoard();
bool checkWin();
bool checkDraw();

char board[3][3] = {{'#', '#', '#'},
                    {'#', '#', '#'},
                    {'#', '#', '#'}};

int size = sizeof(board) / sizeof(board[0]);

int turn = 0;
int player = 0;

bool winner = false;
bool draw = false;

int main()
{
    int choice = 0;

    bool title = true;

    while (!winner && !draw)
    {
        winner = checkWin();
        draw = checkDraw();

        while (turn == 0)
        {

            if (title)
            {
                printf("*** WELCOME TO TIC-TAC-TOE ***\n");
                title = false;
            }

            printf("\n");
            displayBoard();
            printf("Player X's Choice (1 - 9): ");

            if (scanf(" %d", &choice) != 1)
            {
                return 1;
            }

            switch (choice)
            {
            case 1:
                if (board[0][0] == 'X' || board[0][0] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[0][0] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 2:
                if (board[0][1] == 'X' || board[0][1] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[0][1] = 'X';
                    turn = 1;
                    player = 1;
                };
                break;
            case 3:
                if (board[0][2] == 'X' || board[0][2] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[0][2] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 4:
                if (board[1][0] == 'X' || board[1][0] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[1][0] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 5:
                if (board[1][1] == 'X' || board[1][1] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[1][1] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 6:
                if (board[1][2] == 'X' || board[1][2] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[1][2] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 7:
                if (board[2][0] == 'X' || board[2][0] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[2][0] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 8:
                if (board[2][1] == 'X' || board[2][1] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[2][1] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            case 9:
                if (board[2][2] == 'X' || board[2][2] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[2][2] = 'X';
                    turn = 1;
                    player = 1;
                }
                break;
            default:
                system("cls");
                printf("Please enter a vailid number between 1 - 9!\n");
                break;
            }

            checkWin();
            checkDraw();
        }

        while (turn == 1)
        {
            printf("\n");
            displayBoard();
            printf("Player O's Choice (1 - 9): ");

            if (scanf(" %d", &choice) != 1)
            {
                return 1;
            }

            switch (choice)
            {
            case 1:
                if (board[0][0] == 'X' || board[0][0] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[0][0] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 2:
                if (board[0][1] == 'X' || board[0][1] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[0][1] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 3:
                if (board[0][2] == 'X' || board[0][2] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[0][2] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 4:
                if (board[1][0] == 'X' || board[1][0] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[1][0] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 5:
                if (board[1][1] == 'X' || board[1][1] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[1][1] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 6:
                if (board[1][2] == 'X' || board[1][2] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[1][2] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 7:
                if (board[2][0] == 'X' || board[2][0] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[2][0] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 8:
                if (board[2][1] == 'X' || board[2][1] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[2][1] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            case 9:
                if (board[2][2] == 'X' || board[2][2] == 'O')
                {
                    system("cls");
                    printf("Someone already played there, chose again!\n");
                    continue;
                }
                else
                {
                    system("cls");
                    board[2][2] = 'O';
                    turn = 0;
                    player = 0;
                }
                break;
            default:
                system("cls");
                printf("Please enter a vailid number between 1 - 9!\n");
                break;
            }

            checkWin();
            checkDraw();
        }
    }

    if (draw)
    {
        system("cls");
        displayBoard();
        printf("It was a Draw!");
    }

    if (player == 1)
    {
        system("cls");
        displayBoard();
        printf("Player X Wins!");
    }
    else
    {
        system("cls");
        displayBoard();
        printf("Player O Wins!");
    }

    return 0;
}

void displayBoard()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("| %c | ", board[i][j]);
        }
        printf("\n\n");
    }
}

bool checkWin()
{
    for (int i = 0; i < size; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '#' ||
            board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '#')
        {
            turn = -1;
            return true;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '#' ||
        board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '#')
    {
        turn = -1;
        return true;
    }

    return false;
}

bool checkDraw()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == '#')
            {
                return false;
            }
        }
    }

    return true;
}