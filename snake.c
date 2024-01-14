#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int width=20, height=20, gameover,i,j;
int x,y,fruitx,fruity,score,flag;
int counttail=0;
void setup()
{
    gameover=0;
    y=width/2;
    x=height/2;
    label1:
        fruitx=rand()%20;
        if(fruitx==0)
            goto label1;
    label2:
        fruity=rand()%20;
        if(fruity==0)
            goto label2;
        score=0;
}
void draw()
{
    int i,j,k;
    system("cls");
    for(i=0;i<width;i++)
    {
        for(j=0;j<height;j++)
        {
            if(i==0||i==height-1||j==0||j==width-1)
            {
                printf("*");
            }
            else
            {
				if (i == x && j == y)
					printf("0");
				else if (i == fruitx&& j == fruity)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("score = %d", score);
	printf("\n");
}
void input()
{
        if(kbhit())
        {
            switch(getch())
            {
            case 'a':
                flag=1;
                break;
            case 's':
                flag=2;
                break;
            case 'w':
                flag=3;
                break;
            case 'd':
                flag=4;
                break;
            case 'x':
                gameover=1;
                break;
            }
        }
    }

void logic()
{
   sleep(0.00000001);
	switch (flag) {
	case 1:
		y--;
		break;
	case 2:
		x++;
		break;
	case 3:
		x--;
		break;
	case 4:
		y++;
		break;
	default:
		break;
	}
	if (x < 0 || x > height|| y < 0 || y > width)
		gameover = 1;
	if (x == fruitx && y == fruity) {
	label3:
		fruitx = rand() % 20;
		if (fruitx == 0)
			goto label3;
	label4:
		fruity = rand() % 20;
		if (fruity == 0)
			goto label4;
		score += 10;
	}
}
int main()
{
    char c;
    label5:
    setup();
    while(!gameover)
    {
        draw();
        input();
        logic();
    }
    printf("enter the y to play again");
    scanf("%s",&c);
    if(c=='y'||c=='Y')
        goto label5;
    return 0;
}
