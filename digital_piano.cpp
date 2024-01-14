#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    string input;
    cout<<endl<<endl<<endl<<"\t\t\t\t\t"<<"  WELCOME TO THE DIGITAL PIANO"<<endl;
    cout<<endl<<endl<<"\t\t\t\t\t"<<"  PRESS ENTER TO PLAY THE PIANO"<<endl;
    getch();
    while (true)
    {
        system("cls");
        cout<<"press q to exit"<<endl;
        char key = getch();
        input = key;
        if (input == "q" || input == "Q")
        {
            break;
        }
        else
        {
            string videoFilePath = "D:\\sound\\" + input + ".wav";
            ShellExecute(NULL, "open", videoFilePath.c_str(), NULL, NULL, SW_SHOWNORMAL);
        }
    }
    return 0;
}

