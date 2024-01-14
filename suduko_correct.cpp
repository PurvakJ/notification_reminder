#include <iostream>
using namespace std;
#include <stdlib.h>
#include <conio.h>
#define N 9
int i,j,b;
print(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}
int isSafe(int grid[N][N], int row,
					int col, int num)
{
	for (int x = 0; x <= 8; x++)
		if (grid[row][x] == num)
			return 0;
	for (int x = 0; x <= 8; x++)
		if (grid[x][col] == num)
			return 0;
	int startRow = row - row % 3,
				startCol = col - col % 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (grid[i + startRow][j +
						startCol] == num)
				return 0;

	return 1;
}
int solveSudoku(int grid[N][N], int row, int col)
{
	if (row == N - 1 && col == N)
		return 1;
	if (col == N)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return solveSudoku(grid, row, col + 1);
	for (int num = 1; num <= N; num++)
	{
		if (isSafe(grid, row, col, num)==1)
		{
			grid[row][col] = num;
			if (solveSudoku(grid, row, col + 1)==1)
				return 1;
		}
		grid[row][col] = 0;
	}
	return 0;
}
level(int enter)
{
    int value[N][N],press,ran,board[N][N],input[N][N],b=0;
    switch(enter)
    {
    case 1:
        {
        cout<<endl<<"PRESS 1 FOR EASY"<<endl<<"PRESS 2 FOR MEDIUM"<<endl<<"PRESS 3 FOR HARD"<<endl<<"PRESS 4 FOR EXIT"<<endl;
        cin>>press;
        cout<<endl;
        switch(press)
        {
            case 1:
                {
                   int  grid[N][N]=
                                {{0,0,0,0,0,0,2,0,0},
                                {0,8,0,0,0,7,0,9,0},
                                {6,0,2,0,0,0,5,0,0},
                                {0,7,0,0,6,0,0,0,0},
                                {0,0,0,9,0,1,0,0,0},
                                {0,0,0,0,2,0,0,4,0},
                                {0,0,5,0,0,0,6,0,3},
                                {0,9,0,4,0,0,0,7,0},
                                {0,0,6,0,0,0,0,0,0}};
                    for(i=0;i<9;i++)
                    {
                        for(j=0;j<9;j++)
                        {
                            cout<<grid[i][j]<<"  ";
                        }
                        cout<<endl;
                    }
                    cout<<endl<<endl;
                    cout<<"ENTER THE INPUT HERE"<<endl;

                    for(i=0;i<9;i++)
                        {
                            for(j=0;j<9;j++)
                            {
                                cin>>input[i][j];
                                cout<<"  ";
                            }
                            cout<<endl;
                        }
                                if (solveSudoku(grid, 0, 0)==1)
                                {

                                    print(grid);

                                }
                                for(i=0;i<9;i++)
                                {
                                    for(j=0;j<9;j++)
                                    {
                                        value[i][j]=grid[i][j];
                                    }
                                }
                                for(i=0;i<9;i++)
                                {
                                    for(j=0;j<9;j++)
                                    {
                                        if(value[i][j]==input[i][j])
                                            b++;
                                    }
                                }
                                cout<<endl<<endl;
                               if(b==81)
                                {
                                    cout<<"correct answer";
                                }
                                else
                                {
                                    cout<<"wrong answer";
                                }
                    break;
                }
            case 2:
                {
                   int grid[N][N]=
                                {0,7,0,0,2,0,0,4,6,
                                0,6,0,0,0,0,8,9,0,
                                2,0,0,8,0,0,7,1,5,
                                0,8,4,0,9,7,0,0,0,
                                7,1,0,0,0,0,0,5,9,
                                0,0,0,1,3,0,4,8,0,
                                6,9,7,0,0,2,0,0,8,
                                0,5,8,0,0,0,0,6,0,
                                4,3,0,0,8,0,0,7,0};
                    for(i=0;i<9;i++)
                    {
                        for(j=0;j<9;j++)
                        {
                            cout<<grid[i][j]<<"  ";
                        }
                        cout<<endl;
                    }
                     cout<<endl<<endl;
                    cout<<"ENTER THE INPUT HERE"<<endl;

                    for(i=0;i<9;i++)
                        {
                            for(j=0;j<9;j++)
                            {
                                cin>>input[i][j];
                                cout<<"  ";
                            }
                            cout<<endl;
                        }
                    if (solveSudoku(grid, 0, 0)==1)
                                {

                                    print(grid);

                                }
                                for(i=0;i<9;i++)
                                {
                                    for(j=0;j<9;j++)
                                    {
                                        value[i][j]=grid[i][j];
                                    }
                                }
                                for(i=0;i<9;i++)
                                {
                                    for(j=0;j<9;j++)
                                    {
                                        if(value[i][j]==input[i][j])
                                            b++;
                                    }
                                }
                                cout<<endl<<endl;
                               if(b==81)
                                {
                                    cout<<"correct answer";
                                }
                                else
                                {
                                    cout<<"wrong answer";
                                }
                    break;
                }
            case 3:
                {
                    int grid[N][N]={8,0,6,0,1,0,0,0,0,
                                0,0,3,0,6,4,0,9,0,
                                9,0,0,0,0,0,8,1,6,
                                0,8,0,3,9,6,0,0,0,
                                7,0,2,0,4,0,3,0,9,
                                0,0,0,5,7,2,0,8,0,
                                5,2,1,0,0,0,0,0,4,
                                0,3,0,7,5,0,2,0,0,
                                0,0,0,0,2,0,1,0,5};
                    for(i=0;i<9;i++)
                    {
                        for(j=0;j<9;j++)
                        {
                            cout<<grid[i][j]<<"  ";
                        }
                        cout<<endl;
                    }
                     cout<<endl<<endl;
                    cout<<"ENTER THE INPUT HERE"<<endl;

                    for(i=0;i<9;i++)
                        {
                            for(j=0;j<9;j++)
                            {
                                cin>>input[i][j];
                                cout<<"  ";
                            }
                            cout<<endl;
                        }
                        if (solveSudoku(grid, 0, 0)==1)
                                {

                                    print(grid);

                                }
                                for(i=0;i<9;i++)
                                {
                                    for(j=0;j<9;j++)
                                    {
                                        value[i][j]=grid[i][j];
                                    }
                                }
                                for(i=0;i<9;i++)
                                {
                                    for(j=0;j<9;j++)
                                    {
                                        if(value[i][j]==input[i][j])
                                            b++;
                                    }
                                }
                                cout<<endl<<endl;
                               if(b==81)
                                {
                                    cout<<"correct answer";
                                }
                                else
                                {
                                    cout<<"wrong answer";
                                }
                    break;
                }
            case 4:
                {
                    return 0;
                    break;
                }
            }
            break;
        }
            case 2:
                {
                    cout<<endl<<"ENTER THE VALUES OF THE SUDUKO TO SOLVE"<<endl<<endl;
                    int grid[N][N];
                    for(i=0;i<9;i++)
                        {
                            for(j=0;j<9;j++)
                            {
                                cin>>grid[i][j];
                                cout<<ends<<ends;
                            }
                            cout<<endl;
                        }
                        if (solveSudoku(grid, 0, 0)==1)
		print(grid);
	else
		cout<<"No solution exists";
		break;
                }
            case 3:
                {
                    return 0;
                    break;
                }
    }
}
int main()
{
    int enter,enter1;
    label:
    cout<<endl<<endl<<endl<<endl<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"WELCOME TO THE SUDUKO"<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"IF YOU WANT TO PLAY THE GAME PRESS -ENTER-"<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends;
    cout<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"PRESS 1 FOR PLAY THE SUDUKO"<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"PRESS 2 FOR SUDUKO CHECKER"<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"PRESS 3 FOR EXIT THE GAME"<<endl<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends;
    cin>>enter;
    system("cls");
    level(enter);
    cout<<endl<<endl;
    cout<<"IF YOU WANT TO GO TO MAIN MENU BACK PRESS 1"<<endl;
    cin>>enter1;
    if(enter1==1)
        goto label;
    else
	return 0;
}

