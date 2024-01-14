#include <iostream>
using namespace std;
#include <conio.h>
#include <stdlib.h>
main()
{
    cout<<endl<<endl<<endl<<endl<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"WELCOME TO THE KON BANEGA CROREPATI -KBC-"<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<"IF YOU WANT TO PLAY THE GAME PRESS -ENTER-"<<endl<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends<<ends;
    getch();
    label2:
    system("cls");
    int digit1,digit2,digit3,digit4,digit5,digit6,digit7,digit8,digit9,digit10;
    int digit,a,i,k=1,p=0,j=1000,h=0,l=0,m=0,n,o=0;
    label1:

        l=l+1000;
        h++;
        o++;
        system("cls");
        cout<<"PLAY AND WIN"<<endl<<"QUESTION NO. = "<<h<<endl<<endl<<"PLAY FOR PRIZE = "<<l<<endl<<endl;
    char countt;
        cout<<endl;
        for(i=k;i<=10;i++)
        {
            j=1000*i;
            cout<<j<<endl;
        }
        label3:
        digit=rand()%10;
        switch(o)
        {
        case 1:
            {
                digit1=digit;
                break;
            }
        case 2:
            {
                digit2=digit;
                if(digit1==digit2)
                    goto label3;
                else
                break;
            }
        case 3:
            {
                digit3=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1)
                    goto label3;
                else
                break;
            }
        case 4:
            {
                digit4=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1||digit1==digit4||digit2==digit4||digit3==digit4)
                    goto label3;
                else
                break;
            }
        case 5:
            {
                digit5=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1||digit1==digit4||digit2==digit4||digit3==digit4||digit1==digit5||digit2==digit5||digit3==digit5||digit4==digit5)
                    goto label3;
                else
                break;
            }
        case 6:
            {
                digit6=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1||digit1==digit4||digit2==digit4||digit3==digit4||digit1==digit5||digit2==digit5||digit3==digit5||digit4==digit5||digit1==digit6||digit2==digit6||digit3==digit6||digit4==digit6||digit5==digit6)
                    goto label3;
                else
                break;
            }
        case 7:
            {
                digit7=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1||digit1==digit4||digit2==digit4||digit3==digit4||digit1==digit5||digit2==digit5||digit3==digit5||digit4==digit5||digit1==digit6||digit2==digit6||digit3==digit6||digit4==digit6||digit5==digit6||digit1==digit7||digit2==digit7||digit3==digit7||digit4==digit7||digit5==digit7||digit6==digit7)
                    goto label3;
                else
                break;
            }
        case 8:
            {
                digit8=digit;
                if(digit1==digit2||digit1==digit3||digit2==digit3||digit1==digit4||digit2==digit4||digit3==digit4||digit1==digit5||digit2==digit5||digit3==digit5||digit4==digit5||digit1==digit6||digit2==digit6||digit3==digit6||digit4==digit6||digit5==digit6||digit1==digit7||digit2==digit7||digit3==digit7||digit4==digit7||digit5==digit7||digit6==digit7||digit1==digit8||digit2==digit8||digit3==digit8||digit4==digit8||digit5==digit8||digit6==digit8||digit7==digit8)
                    goto label3;
                else
                break;
            }
        case 9:
            {
                digit9=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1||digit1==digit4||digit2==digit4||digit3==digit4||digit1==digit5||digit2==digit5||digit3==digit5||digit4==digit5||digit1==digit6||digit2==digit6||digit3==digit6||digit4==digit6||digit5==digit6||digit1==digit7||digit2==digit7||digit3==digit7||digit4==digit7||digit5==digit7||digit6==digit7||digit1==digit8||digit2==digit8||digit3==digit8||digit4==digit8||digit5==digit8||digit6==digit8||digit7==digit8||digit1==digit9||digit2==digit9||digit3==digit9||digit4==digit9||digit5==digit9||digit6==digit9||digit7==digit9||digit8==digit9)
                    goto label3;
                else
                break;
            }
        case 10:
            {
                digit10=digit;
                if(digit1==digit2||digit2==digit3||digit3==digit1||digit1==digit4||digit2==digit4||digit3==digit4||digit1==digit5||digit2==digit5||digit3==digit5||digit4==digit5||digit1==digit6||digit2==digit6||digit3==digit6||digit4==digit6||digit5==digit6||digit1==digit7||digit2==digit7||digit3==digit7||digit4==digit7||digit5==digit7||digit6==digit7||digit1==digit8||digit2==digit8||digit3==digit8||digit4==digit8||digit5==digit8||digit6==digit8||digit7==digit8||digit1==digit9||digit2==digit9||digit3==digit9||digit4==digit9||digit5==digit9||digit6==digit9||digit7==digit9||digit8==digit9||digit1==digit10||digit2==digit10||digit3==digit10||digit4==digit10||digit5==digit10||digit6==digit10||digit7==digit10||digit8==digit10||digit9==digit10)
                    goto label3;
                else
                break;
            }
        }
    switch(digit)
    {
    case 1:
        {
            cout<<"1. Who invented C++?"<<endl<<"a) Dennis Ritchie"<<endl<<"b) Ken Thompson"<<endl<<"c) Brian Kernighan"<<endl<<"d)Bjarne Stroustrup"<<endl;
            cin>>countt;
            if(countt=='d')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 2:
        {
            cout<<"2. What is C++?"<<endl<<"a) C++ is an object oriented programming language"<<endl<<"b) C++ is a procedural programming language"<<endl<<"c) C++ supports both procedural and object oriented programming language"<<endl<<"d) C++ is a functional programming language"<<endl;
            cin>>countt;
            if(countt=='c')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 3:
        {
            cout<<"3. Which of the following is the correct syntax of including a user defined header files in C++?"<<endl<<"a) #include [userdefined]"<<endl<<"b) #include “userdefined”"<<endl<<"c) #include <userdefined.h>"<<endl<<"d) #include <userdefined>"<<endl;
            cin>>countt;
            if(countt=='b')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 4:
        {
            cout<<"4. Which of the following is used for comments in C++?"<<endl<<"a) /* comment */"<<endl<<"b) // comment */"<<endl<<"c) // comment"<<endl<<"d) both // comment or /* comment */"<<endl;
            cin>>countt;
            if(countt=='d')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 5:
        {
            cout<<"5. Which of the following user-defined header file extension used in c++?"<<endl<<"a) hg"<<endl<<"b) cpp"<<endl<<"c) h"<<endl<<"d) hf"<<endl;
            cin>>countt;
            if(countt=='c')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 6:
        {
            cout<<"6. Which of the following is a correct identifier in C++?"<<endl<<"a) VAR_1234"<<endl<<"b) $var_name"<<endl<<"c) 7VARNAME"<<endl<<"d) 7var_name"<<endl;
            cin>>countt;
            if(countt=='a')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer";
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 7:
        {
            cout<<"7. Which of the following is not a type of Constructor in C++?"<<endl<<"a) Default constructor"<<endl<<"b) Parameterized constructor"<<endl<<"c) Copy constructor"<<endl<<"d) Friend constructor"<<endl;
            cin>>countt;
            if(countt=='d')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 8:
        {
            cout<<"8. Which of the following approach is used by C++?"<<endl<<"a) Left-right"<<endl<<"b) Right-left"<<endl<<"c) Bottom-up"<<endl<<"d) Top-down"<<endl;
            cin>>countt;
            if(countt=='c')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 9:
        {
            cout<<"9. What is virtual inheritance in C++?"<<endl<<"a) C++ technique to enhance multiple inheritance"<<endl<<"b) C++ technique to ensure that a private member of the base class can be accessed somehow"<<endl<<"c) C++ technique to avoid multiple inheritances of classes"<<endl<<"d) C++ technique to avoid multiple copies of the base class into children/derived class"<<endl;
            cin>>countt;
            if(countt=='d')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    case 10:
        {
            cout<<"10. What happens if the following C++ statement is compiled and executed?"<<endl<<endl<<"int *ptr = NULL;"<<endl<<"delete ptr;"<<endl<<"a) The program is not semantically correct"<<endl<<"b) The program is compiled and executed successfully"<<endl<<"c) The program gives a compile-time error"<<endl<<"d) The program compiled successfully but throws an error during run-time"<<endl;
            cin>>countt;
            if(countt=='b')
            {
                cout<<"correct answer";
                k++;
                p++;
                m++;
            }
            else
            {
                cout<<"wrong answer"<<endl;
                cout<<"your total points = ";
                p=p*1000;
                cout<<p;
                return 0;
            }
            break;
        }
    }
    if(m==10)
    {
        cout<<endl<<"YOU ANSWER ALL THE QUESTIONS"<<endl<<"YOU WIN THE GAME WITH 10000 POINTS"<<endl<<"IF YOU WANT TO PLAY AGAIN PRESS 1 ELSE PRESS ANY ANOTHER KEY"<<endl;
        cin>>n;
        if(n==1)
        {
            goto label2;
        }
        else
            return 0;
    }
    else
    {
        goto label1;
    }
}
