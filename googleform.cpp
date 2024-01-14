#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

struct Question {
    string text;
    vector<string> options;
    int correctOption;
};

int main()
{
    int marks=0,number=0;
    vector<Question> questions;
    bool addMore = true;

    cout<<endl<<endl<<endl<<"\t\t\t\t\t"<<"welcome to the MCQ QUESTION FORM"<<endl<<endl;

    while (addMore)
    {
        number++;
        Question q;
        cout << "Enter question text: ";
        getline(cin, q.text);

        int Options;
        cout << "Enter number of options: ";
        cin >> Options;
        cin.ignore();

        for (int i = 0; i < Options; i++) {
            string option;
            cout << "Enter option " << i+1 << ": ";
            getline(cin, option);
            q.options.push_back(option);
        }
        cout << "Enter index of correct option (starting from 0): ";
        cin >> q.correctOption;
        cin.ignore();

        questions.push_back(q);

        char newone;
        cout << "Do you want to add more questions? (y/n): ";
        cin >> newone;
        addMore = (newone == 'y' || newone == 'Y');
        cin.ignore();
        system("cls");
    }
    int answer;
    for (int i = 0; i < questions.size(); i++) {
        cout << "\nQuestion " << i+1 << ": " << questions[i].text << endl;
        for (int j = 0; j < questions[i].options.size(); j++) {
            cout << j << ") " << questions[i].options[j] << endl;
        }
        cout<<"enter the answer of the question (0 to _)";
        cin>>answer;

        if(answer==questions[i].correctOption)
        {
            cout<<"correct answer";
            marks=marks+5;

        }
        else
        {
            cout<<"wrong answer"<<endl;
        cout << "Correct answer is: " << questions[i].correctOption << endl;
        }
        getch();
        system("cls");
    }
    cout<<endl<<endl<<"\t\t\t\t\t"<<"total numbers= "<<number*5;
    cout<<endl<<endl<<"\t\t\t\t\t"<<"your total marks= "<<marks;

}
