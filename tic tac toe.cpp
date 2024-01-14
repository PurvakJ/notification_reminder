#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
label:
	fflush(stdin);
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}},turn='x';
int choice,row,col,key,i,j;
bool draw=false;
    label:


display_board()
{
    system("cls");
    cout<<"\t"<<ends<<"  WELCOME TO THE TIC-TAC-TOE GAME"<<endl<<endl;
    cout<<endl<<"\t\tFOR PLAYER 1 [X]";
    cout<<endl<<"\t\tFOR PLAYER 2 [O]"<<endl;
        cout<<endl<<endl;
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
    cout<<"\t\t     |     |     \n";
    cout<<endl;
}

player_turn()
{
    if(turn=='x')
    {
    cout<<"\n\t\tplayer 1 [X] turn";
    }
    if(turn=='o')
    {
    cout<<"\n\t\tplayer 2 [O] turn";
    }
    cout<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            row=0;
            col=0;
            break;
        }
    case 2:
        {
            row=0;
            col=1;
            break;
        }
    case 3:
        {
            row=0;
            col=2;
            break;
        }
    case 4:
        {
            row=1;
            col=0;
            break;
        }
    case 5:
        {
            row=1;
            col=1;
            break;
        }
    case 6:
        {
            row=1;
            col=2;
            break;
        }
    case 7:
        {
            row=2;
            col=0;
            break;
        }
    case 8:
        {
            row=2;
            col=1;
            break;
        }
    case 9:
        {
            row=2;
            col=2;
            break;
        }
    default:
        {
            cout<<"wrong input";
            cout<<endl<<endl;
            break;
        }
    }
    if(turn=='x'&& board[row][col]!='X'&& board[row][col]!='O')
    {
        board[row][col]='X';
        turn='o';
    }
    else if(turn=='o'&& board[row][col]!='X'&& board[row][col]!='O')
    {
        board[row][col]='O';
        turn='x';
    }
    else
    {
        cout<<endl<<endl<<"BOX ALREADY FILLED !!!!!"<<endl;
        player_turn();
    }
    display_board();
}

bool gameover()
{
    for(i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1]&& board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
        return false;
        if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
        return false;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(board[i][j]!= 'X'&& board[i][j]!= 'O')
            return true;
        }
    }

    draw=true;
    return false;
}

main()
{
    int again;
    fflush(stdin);
    while(gameover())
    {
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'x'&& draw==false)
    {
        cout<<"PLAYER 2 [O] WON !!!!!"<<endl;
    }
    else if(turn == 'o'&& draw==false)
    {
        cout<<"PLAYER 1 [X] WON !!!!!"<<endl;
    }
    else
    {
        cout<<"GAME DRAW !!"<<endl;
    }
    cout<<"if you want to play again press 1";
    cin>>again;
    if(again==1)
    {
        goto c;
    }

}
