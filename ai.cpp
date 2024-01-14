#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <chrono>
#include <ctime>
using namespace std;
int main()
{
    int value,password,again;
    string output;
    string line;
    string path;
    label1:
    cout<<"____________________________________________________\n";
    cout<<"enter the password to operate the A.I.\n";
    output="enter the password to operate the A.I.";
    string command = "espeak \"" + output + "\"";
    system(command.c_str());
    cin>>password;
    cin.ignore();
    if(password==1234)
    {
        while(1)
        {
        label2:
            system("cls");
    cout<<"\n____________________________________________________\n";
    cout<<"Hi PURVAK\n";
    cout<<"____________________________________________________\n";
    cout<<"Welcome to the A.I.\n";
    cout<<"____________________________________________________\n";
    output= "hi purvak welcome to the Artificial Intelligence ask anything from A.I. to do";
    string command = "espeak \"" + output + "\"";
    system(command.c_str());
    cin.ignore();
    getline(cin, line);
    value = (line.find("google") != std::string::npos) ? 1 : 0;
    if (value==1)
    goto label;
    value = (line.find("youtube") != std::string::npos) ? 2 : 0;
    if (value==2)
    goto label;
    value = (line.find("instagram") != std::string::npos) ? 3 : 0;
    if (value==3)
    goto label;
    value = (line.find("facebook") != std::string::npos) ? 4 : 0;
    if (value==4)
    goto label;
    value = (line.find("text") != std::string::npos) ? 5 : 0;
    if (value==5)
    goto label;
    value = (line.find("browse") != std::string::npos) ? 6 : 0;
    if (value==6)
    goto label;
    value = (line.find("videos") != std::string::npos) ? 7 : 0;
    if (value==7)
    goto label;
    value = (line.find("images") != std::string::npos) ? 8 : 0;
    if (value==8)
    goto label;
    value = (line.find("music") != std::string::npos) ? 9 : 0;
    if (value==9)
    goto label;
    value = (line.find("whatsapp") != std::string::npos) ? 10 : 0;
    if (value==10)
    goto label;
    value = (line.find("word") != std::string::npos) ? 11 : 0;
    if (value==11)
    goto label;
    value = (line.find("notepad") != std::string::npos) ? 12 : 0;
    if (value==12)
    goto label;
    value = (line.find("powerpoint") != std::string::npos) ? 13 : 0;
    if (value==13)
    goto label;
    value = (line.find("access") != std::string::npos) ? 14 : 0;
    if (value==14)
    goto label;
    value = (line.find("snapchat") != std::string::npos) ? 18 : 0;
    if (value==18)
    goto label;
    value = (line.find("exit") != std::string::npos) ? 17 : 0;
    if (value==17)
    goto label;
    value = (line.find("date") != std::string::npos) ? 19 : 0;
    if (value==19)
    goto label;
    label:
        if(line=="i")
    {
        system("cls");
        cout<<"HII.......\n";
        output="hi";
        string command = "espeak \"" + output + "\"";
        system(command.c_str());
        system("cls");
    }
    else if(line=="ow are you")
    {
        system("cls");
        cout<<"I AM FINE.......\n";
        output="i am fine";
        string command = "espeak \"" + output + "\"";
        system(command.c_str());
        system("cls");
    }
    else if(line=="i how are you")
    {
        system("cls");
        cout<<"HII I AM FINE.......\n";
        output="hi i am fine";
        string command = "espeak \"" + output + "\"";
        system(command.c_str());
        system("cls");
    }
    else if(line=="xit")
    {
        system("cls");
        cout<<"Thanks to use the A.I.";
        output="Bye bye purvak sir have a nice day";
        command = "espeak \"" + output + "\"";
        system(command.c_str());
        return 0;
    }
    else if(line=="ho are you")
    {
        system("cls");
        cout<<"I am your personal assistant boss.......\n";
        output="I am your personal assistant boss";
        string command = "espeak \"" + output + "\"";
        system(command.c_str());
    }
    switch(value)
    {
    case 1:
        {
            system("cls");
            string url =("https://www.google.com/search?q=");
            cout << "Enter your search query: ";
            string query;
            getline(cin, query);
            for (int i = 0; i < query.length(); i++)
            {
                if (query[i] == ' ')
                {
                    url += "%20";
                }
            else
                {
                url += query[i];
                }
            }
            ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
            cout<<"opening google.......\n";
        }
        system("cls");
        break;
    case 2:
        {
        system("cls");
            cout<<"opening youtube.......\n";
        system("start https://www.youtube.com");
        }
        system("cls");
        break;
    case 3:
        {
        system("cls");
            cout<<"opening instagram.......\n";
        system("start https://www.instagram.com");
        }
        system("cls");
        break;
    case 4:
        {
        system("cls");
            cout<<"opening facebook.......\n";
        system("start https://www.facebook.com");
        }
        system("cls");
        break;
    case 5:
        {
        system("cls");
        string filePath;
        cout << "Enter the name of the text file you want to open: ";
        getline(cin, filePath);
        ifstream inputFile(filePath);
        if (inputFile.is_open())
        {
            cout<<"opening text file.....\n";
            cout << "File contents:" << endl;
            string line;
            while (getline(inputFile, line))
            {
                cout << line << endl;
            }
        inputFile.close();
        }
        else
        {
            cout << "Unable to open file." << endl;
        }
        getch();
        }
        system("cls");
        break;
    case 6:
        {
        system("cls");
        cout << "Enter the path of the file of your desktop: \n";
        getline(cin, path);
        #ifdef _WIN32
        string command = "start \"\" \"" + path + "\"";
        #elif __APPLE__
        string command = "open \"" + path + "\"";
        #else
        string command = "xdg-open \"" + path + "\"";
        #endif
        int result = system(command.c_str());
        if (result == 0)
        {
            cout << "file opened successfully." << std::endl;
        }
        else
        {
            cout << "Failed to open file." << std::endl;
        }
        }
        system("cls");
        break;
    case 7:
        {
            system("cls");
            cout<<"Enter the video name in your video folder\n";
            string a;
            getline(cin, a);
            cout<<"opening video.......\n";
            string videoFilePath = "D:\\mobile pics\\videos\\" + a + ".mp4";
            ShellExecute(NULL, "open", videoFilePath.c_str(), NULL, NULL, SW_SHOWNORMAL);
        }
        system("cls");
        break;
    case 8:
        {
            system("cls");
            cout<<"Enter the photo name in your photos folder\n";
            string a;
            getline(cin, a);
            cout<<"opening photo.......\n";
            wstring filename = L"D:\\mobile pics\\Pictures\\.thumbnails\\" + wstring(a.begin(), a.end()) + L".jpg";
            HINSTANCE result = ShellExecuteW(NULL, L"open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);
        }
        system("cls");
        break;
    case 9:
        {
            system("cls");
            cout<<"Enter the music name in your music folder\n";
            string a;
            getline(cin, a);
            cout<<"playing music.......\n";
            string videoFilePath = "D:\\mobile pics\\music\\" + a + ".mp3";
            ShellExecute(NULL, "open", videoFilePath.c_str(), NULL, NULL, SW_SHOWNORMAL);
        }
        system("cls");
        break;
    case 10:
        {
        system("cls");
        cout<<"opening whatsapp.......\n";
        system("start https://web.whatsapp.com/");
        }
        system("cls");
        break;
    case 11:
        {
        system("cls");
        cout<<"opening Micrsosoft Word.......\n";
        system("start winword.exe");
        }
        system("cls");
        break;
    case 12:
        {
        system("cls");
        cout<<"opening Notepad.......\n";
        system("notepad.exe");
        }
        system("cls");
        break;
    case 13:
        {
        system("cls");
        cout<<"opening Micrsosoft PowerPoint.......\n";
        system("start POWERPNT.EXE");
        }
        system("cls");
        break;
    case 14:
        {
        system("cls");
        cout<<"opening Micrsosoft Access.......\n";
        system("start MSACCESS.EXE");
        }
        system("cls");
        break;
    case 17:
        {
        system("cls");
        cout<<"Thanks to use the A.I.";
        output="Bye bye purvak sir have a nice day";
        command = "espeak \"" + output + "\"";
        system(command.c_str());
        return 0;
        }
        system("cls");
        break;
    case 18:
        {
        system("cls");
        cout<<"opening Snapchat.......\n";
        system("start https://www.snapchat.com/");
        }
        system("cls");
        break;
    case 19:
        {
    auto now = std::chrono::system_clock::now();
    std::time_t time_now = std::chrono::system_clock::to_time_t(now);
    std::tm local_time = *std::localtime(&time_now);
    std::cout << "Current date and time: "
              << (local_time.tm_year + 1900) << "-"
              << (local_time.tm_mon + 1) << "-"
              << local_time.tm_mday << " "
              << local_time.tm_hour << ":"
              << local_time.tm_min << ":"
              << local_time.tm_sec << std::endl;
              getch();
        }
        system("cls");
        break;
    }
    getch();
    }
}
    else
    {
        cout<<"wrong password!!!!\n";
        output="wrong password";
        string command = "espeak \"" + output + "\"";
        system(command.c_str());
        system("cls");
        goto label1;
    }
}


