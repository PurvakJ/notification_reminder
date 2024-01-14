#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int player1=0;
int player2=0;
int current_player=1;
int first1=0;
int first2=0;
int i,j;

void printBoard()
{
    int board[10][10] = {
        {100, 99, 98, 97, 96, 95, 94, 93, 92, 91},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {80, 79, 78, 77, 76, 75, 74, 73, 72, 71},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {60, 59, 58, 57, 56, 55, 54, 53, 52, 51},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {40, 39, 38, 37, 36, 35, 34, 33, 32, 31},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {20, 19, 18, 17, 16, 15, 14, 13, 12, 11},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    };
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(board[i][j]==player1)
            {
                cout<<"|P1|\t";
            }
            else if(board[i][j]==player2)
            {
                cout<<"|P2|\t";
            }
            else
            {
                cout<<board[i][j]<<"\t";
            }
        }
        cout<<endl<<endl;
    }
}

int main()
{
    while (player1<100 && player2<100)
    {
        printBoard();
        if(current_player==1)
        {
            int dice=0;
            dice=((rand()+rand()+50000)%6)+1;
            cout<<"press enter to roll the dice"<<endl;
            getch();
            cout<<"player 1 got "<<dice<<" digit"<<endl;
            if(dice!=6&&player1<1)
            {
                cout<<"player 1 you need 6 to get on the position 1"<<endl;
            }
            else
            {
                first1++;
                if(first1==1)
                {
                    cout<<"now player 1 position is  set to 1"<<endl;
                    player1=1;
                }
                else
                {
                    player1=player1+dice;
                    if (player1>100)
                    {
                        player1=100-(player1-100);
                        int coun=100-player1;
                        cout<<"player 1 you need "<<coun<<" digit to win the game"<<endl;
                    }
                    cout<<"player 1 current position is "<<player1<<endl;
                }
            }
            current_player=2;
            goto label;
        }
        if(current_player==2)
        {
            int dice=0;
            dice=((rand()+rand()+50000)%6)+1;
            cout<<"press enter to roll the dice"<<endl;
            getch();
            cout<<"player 2 got "<<dice<<" digit"<<endl;
            if(dice!=6&&player2<1)
            {
                cout<<"player 2 you need 6 to get on the position 1"<<endl;
            }
            else
            {
                first2++;
                if(first2==1)
                {
                    cout<<"now player 2 position is  set to 1"<<endl;
                    player2=1;
                }
                else
                {
                    player2=player2+dice;
                    if (player2>100)
                    {
                        player2=100-(player2-100);
                        int coun=100-player2;
                        cout<<"player 2 you need "<<coun<<" digit to win the game"<<endl;
                    }
                    cout<<"player 2 current position is "<<player2<<endl;
                }
            }
            current_player=1;
            goto label;
        }
        label:

        switch (current_player)
        {
            case 1:
                switch (player1)
                {
                    case 3:
                        {
                        cout<<"player 1 you got ladder now your position is 39"<<endl;
                        player1=39;
                        break;
                        }
                    case 13:
                        {
                        cout<<"player 1 you got ladder now your position is 34"<<endl;
                        player1=34;
                        break;
                        }
                    case 27:
                        {
                        cout<<"player 1 you got ladder now your position is 53"<<endl;
                        player1=53;
                        break;
                        }
                    case 42:
                        {
                        cout<<"player 1 you got snake now your position is 19"<<endl;
                        player1=19;
                        break;
                        }
                    case 68:
                        {
                        cout<<"player 1 you got ladder now your position is 98"<<endl;
                        player1=98;
                        break;
                        }
                    case 74:
                        {
                        cout<<"player 1 you got snake now your position is 55"<<endl;
                        player1=55;
                        break;
                        }
                    case 81:
                        {
                        cout<<"player 1 you got ladder now your position is 91"<<endl;
                        player1=91;
                        break;
                        }
                }
                break;
            case 2:
                switch (player2)
                {
                    case 3:
                        {
                        cout<<"player 2 you got ladder now your position is 39"<<endl;
                        player2=39;
                        break;
                        }
                    case 13:
                        {
                        cout<<"player 2 you got ladder now your position is 34"<<endl;
                        player2=34;
                        break;
                        }
                    case 27:
                        {
                        cout<<"player 2 you got ladder now your position is 53"<<endl;
                        player2=53;
                        break;
                        }
                    case 42:
                        {
                        cout<<"player 2 you got snake now your position is 19"<<endl;
                        player2=19;
                        break;
                        }
                    case 68:
                        {
                        cout<<"player 2 you got ladder now your position is 98"<<endl;
                        player2=98;
                        break;
                        }
                    case 74:
                        {
                        cout<<"player 2 you got snake now your position is 55"<<endl;
                        player2=55;
                        break;
                        }
                    case 81:
                        {
                        cout<<"player 2 you got ladder now your position is 91"<<endl;
                        player2=91;
                        break;
                        }
                }
                break;
        }
        getch();
        system("cls");
    }
    if (player1==100)
    {
        cout << "Player 1 wins!" << endl;
    }
    else
    {
        cout << "Player 2 wins!" << endl;
    }
}
