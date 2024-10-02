#include <iostream>
using namespace std;

void print(char board[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "| ";
            cout << board[i][j] << " ";
            if (j == 2)
            {
                cout << "|";
            }
        }
        cout << endl;
    }
}

void game(char board[][3])
{
    system("CLS");
    int count = 0;
    char a = '0';
    char p1;
    char p2;
    cout << "Welcome:" << endl;

    while (1)
    {
        cout << endl;
        print(board);

        cout << endl;
        cout << "Player 1 turn: ";

        cin >> p1;
        count++;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (p1 == board[i][j])
                {
                    board[i][j] = 'X';
                    break;
                }
            }
        }
        cout << endl;
        system("CLS");
        print(board);
        if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
            (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
            (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
        {
            cout << "player 1 Win" << endl;
            print(board);
            break;
        }
        else if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
                 (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
                 (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
        {
            cout << "player 2 Win" << endl;
            print(board);
            break;
        }
        if (count == 9)
        {
            if (board[0][0] == '1' || board[0][1] == '2' || board[0][2] == '3' || board[1][0] == '4' || board[1][1] == '5' || board[1][2] == '6' || board[2][0] == '7' || board[2][1] == '8' || board[2][2] == '9')
            {
                continue;
            }
            else
            {
                cout << endl;
                cout << "Match Tied" << endl;
                break;
            }
        }

        cout << endl;
        cout << "Player 2 turn: ";

        cin >> p2;
        system("CLS");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (p2 == board[i][j])
                {
                    board[i][j] = 'O';
                }
            }
        }

        if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
            (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
            (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
        {
            cout << "player 1 Win" << endl;
            print(board);
            break;
        }
        else if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
                 (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
                 (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
        {
            cout << "player 2 Win" << endl;
            print(board);
            break;
        }

        if (count == 9)
        {
            if (board[0][0] == '1' || board[0][1] == '2' || board[0][2] == '3' || board[1][0] == '4' || board[1][1] == '5' || board[1][2] == '6' || board[2][0] == '7' || board[2][1] == '8' || board[2][2] == '9')
            {
                continue;
            }
            else
            {
                cout << endl;
                cout << "Match Tied" << endl;
                break;
            }
        }

        count++;
    }
}

int main()
{

    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    game(board);

    return 0;
}