#include<stdio.h>
int main()
{
    int h,m,s;
    int day,month,year;
    int date=0;
    int d=950;
    printf("set time :\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>23 || m>60 || s>60)
    {
        printf("ERROR!!!!!\n");
        exit(0);
    }
     printf("enter the date : \n");
            scanf("%d%d%d",&day,&month,&year);
            if(day>31||month>12)
            {
                printf("ERROR!!!!!\n");
                exit(0);
            }
    printf("enter the day no like 0 for monday, 1 for tuesday :\n");
    scanf("%d",&date);
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>23)
        {
           h=0;
        }
        if(h==0&&m==0&&s==0)
        {
            day++;
        }
        if(day>31)
        {
            month++;
            day=01;
        }
        if(month>12)
        {
            year++;
            month=01;
        }
        if(h==0&&m==0&&s==0)
        {
            date++;
        }
        if(date>6)
        {
            date=0;
        }
        if(date==0)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t MONDAY");
        }
        if(date==1)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t TUESDAY");
        }
        if(date==2)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t WEDNESDAY");
        }
        if(date==3)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t THURSDAY");
        }
        if(date==4)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t FRIDAY");
        }
        if(date==5)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t SATURDAY");
        }
        if(date==6)
        {
            printf("\n\n\n\t\t\t\t\t DAY:");
            printf("\n\t\t\t\t\t\t YIPEE!!!!! SUNDAY");
        }
        printf("\n\n\t\t\t\t\t DATE:");
       printf("\n\t\t\t\t\t\t %02d:%02d:%04d",day,month,year);
       printf("\n\n\t\t\t\t\t TIME:");
        printf("\n\t\t\t\t\t\t %02d:%02d:%02d",h,m,s);
         if(h<12)
            printf(" a.m.");
        else
            printf(" p.m.");
             Sleep(d);
        system("cls");
}
}

