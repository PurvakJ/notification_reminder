#include<iostream>
#include<fstream>
#include<vector>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include<conio.h>

using namespace std;


    string username, password;
    string email;
    string choice;
    string car,brand;
    string namee;
    int invoice;
    int charges;
    char car_name,brand_name;
    int number,amount;
    long long int contact, days, advanced;


struct User {
    string username;
    string password;
    string email;
    // other user information
};

void addUser(User user) {
    ofstream file("login.txt", ios::app);
    file << user.username << "," << user.password << "," << user.email << endl;
    file.close();
}

vector<User> getUsers() {
    vector<User> users;
    ifstream file("login.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string username, password, email;
        getline(ss, username, ',');
        getline(ss, password, ',');
        getline(ss, email, ',');
        users.push_back({ username, password, email });
    }
    file.close();
    return users;
}
bool login(string username, string password) {
    vector<User> users = getUsers();
    for (User user : users) {
        if (user.username == username && user.password == password) {
            return true;
        }
    }
    return false;
}
void registerUser(string username, string password, string email) {
    addUser({ username, password, email });
}

void branded()
{

    cout<<"select the brand of the car\n";
    cout<<"enter 'A' for maruit_suzuki\n";
    cout<<"enter 'B' for hyundai\n";
    cout<<"enter 'C' for renault\n";
    cout<<"enter 'D' for ford\n";
    cout<<"enter 'E' for honda\n";
    cout<<"enter 'F' for toyota\n";
    cout<<"enter 'G' for mahindra\n";
    cout<<"enter 'H' for tata\n";
    cin>>brand_name;
    if(brand_name=='a')
        {
            brand="maruit_suzuki";
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for swift\n";
            cout<<"enter 'B' for dzire\n";
            cout<<"enter 'C' for baleno\n";
            cout<<"enter 'D' for ertiga\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="swift";
                charges=700;
            }
            else if(car_name=='b')
            {
                car="dzire";
                charges=900;
            }
            else if(car_name=='c')
            {
                car="baleno";
                charges=800;
            }
            else if(car_name=='d')
            {
                car="eritga";
                charges=1100;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='b')
        {
            brand="hyundai";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for i10\n";
            cout<<"enter 'B' for i20\n";
            cout<<"enter 'C' for creta\n";
            cout<<"enter 'D' for verna\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="i10";
                charges=700;
            }
            else if(car_name=='b')
            {
                car="i20";
                charges=800;
            }
            else if(car_name=='c')
            {
                car="creta";
                charges=1500;
            }
            else if(car_name=='d')
            {
                car="verna";
                charges=1200;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='c')
        {
            brand="renault";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for duster\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="duster";
                charges=1500;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='d')
        {
            brand="ford";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for figo\n";
            cout<<"enter 'B' for endeavour\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="figo";
                charges=700;
            }
            else if(car_name=='b')
            {
                car="endeavour";
                charges=2000;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='e')
        {
            brand="honda";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for amaze\n";
            cout<<"enter 'B' for city\n";
            cout<<"enter 'C' for wr-v\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="amaze";
                charges=1000;
            }
            else if(car_name=='b')
            {
                car="city";
                charges=1300;
            }
            else if(car_name=='c')
            {
                car="wr-v";
                charges=1300;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='f')
        {
            brand="toyota";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for urban cruiser\n";
            cout<<"enter 'B' for innova\n";
            cout<<"enter 'C' for etios\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="urban_cruiser";
                charges=1000;
            }
            else if(car_name=='b')
            {
                car="innova";
                charges=2000;
            }
            else if(car_name=='c')
            {
                car="etios";
                charges=1100;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='g')
        {
            brand="mahindra";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for xuv500\n";
            cout<<"enter 'B' for xuv700\n";
            cout<<"enter 'C' for thar\n";
            cout<<"enter 'D' for bolero\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="xuv500";
                charges=800;
            }
            else if(car_name=='b')
            {
                car="xuv700";
                charges=1100;
            }
            else if(car_name=='c')
            {
                car="thar";
            }
            else if(car_name=='d')
            {
                car="bolero";
                charges=1500;
            }
            else
                cout<<"invalid input";
        }
    else if(brand_name=='h')
        {
            brand="tata";
            system("cls");
            cout<<"choose the car model from the list\n";
            cout<<"enter 'A' for harrier\n";
            cout<<"enter 'B' for nexon\n";
            cout<<"enter 'C' for safari\n";
            cout<<"enter 'D' for punch\n";
            cin>>car_name;
            if(car_name=='a')
            {
                car="harrier";
                charges=1800;
            }
            else if(car_name=='b')
            {
                car="nexon";
                charges=1000;
            }
            else if(car_name=='c')
            {
                car="safari";
                charges=1700;
            }
            else if(car_name=='d')
            {
                car="punch";
                charges=700;
            }
            else
                cout<<"invalid input";
        }
    else
        cout<<"this is inaccurate option";


    cout<<brand<<"\n";
    cout<<car<<"\n";
}
information()
{
    cout<<"enter the contact no.\n";
    cin>>contact;
    cout<<"enter the number of days for rent the car\n";
    cin>>days;
    cout<<"enter the advanced payment of rent\n";
    cin>>advanced;
}
invoiced()
{
    ofstream file(namee + ".txt");
    amount=days*charges;
    invoice=rand()%10000;
    cout<<"calculating rent, please wait,,,,,,,,,\n\n";
    file<<"calculating rent, please wait,,,,,,,,,\n\n";
    cout<<"\t\t\t\t car rental- customer invoice\n\n";
    file<<"\t\t\t\t car rental- customer invoice\n\n";
    cout<<"/////////////////////////////////////////////////////////\n";
    file<<"/////////////////////////////////////////////////////////\n";
    cout<<"\t\t|invoice no.:___________________|#"<<invoice<<"|\n";
    file<<"\t\t|invoice no.:___________________|#"<<invoice<<"|\n";
    cout<<"\t\t|customer name:_________________|"<<namee<<"|\n";
    file<<"\t\t|customer name:_________________|"<<namee<<"|\n";
    cout<<"\t\t|car brand:_____________________|"<<brand<<"|\n";
    file<<"\t\t|car brand:_____________________|"<<brand<<"|\n";
    cout<<"\t\t|car model:_____________________|"<<car<<"|\n";
    file<<"\t\t|car model:_____________________|"<<car<<"|\n";
    cout<<"\t\t|no of days for hire:___________|"<<days<<"|\n";
    file<<"\t\t|no of days for hire:___________|"<<days<<"|\n";
    cout<<"\t\t|rental amount:_________________|"<<amount<<"|\n";
    file<<"\t\t|rental amount:_________________|"<<amount<<"|\n";
    cout<<"\t\t|advanced payment:______________|"<<advanced<<"|\n";
    file<<"\t\t|advanced payment:______________|"<<advanced<<"|\n";
    cout<<"/////////////////////////////////////////////////////////\n\n";
    file<<"/////////////////////////////////////////////////////////\n\n";
    amount=amount-advanced;
    cout<<"\t\t|total rental amount is:________|"<<amount<<"|\n";
    file<<"\t\t|total rental amount is:________|"<<amount<<"|\n";
    cout<<"----------------------------------------------------------\n\n";
    file<<"----------------------------------------------------------\n\n";
    cout<<"/////////////////////////////////////////////////////////\n\n";
    file<<"/////////////////////////////////////////////////////////\n\n";
    cout<<"\t\tyou are advised to pay up the amount before due date.\n\t\totherwise penelty fee will be applied\n";
    file<<"\t\tyou are advised to pay up the amount before due date.\n\t\totherwise penelty fee will be applied\n";
    cout<<"/////////////////////////////////////////////////////////\n\n";
    file<<"/////////////////////////////////////////////////////////\n\n";
}

int main()
{
    label:
    int maine;
    cout << "Login or register? ";
    cin >> choice;
    if (choice == "login") {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        if (login(username, password)) {
            cout << "Login successful!" << endl;
        } else {
            cout << "Invalid username or password." << endl;
            goto label;
        }
    } else if (choice == "register") {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        cout << "Enter email: ";
        cin >> email;
        registerUser(username, password, email);
        cout << "Registration successful!" << endl;
    } else {
        cout << "Invalid choice. you have to first login or register to go into the menu" << endl;
        goto label;
    }
    system("cls");


    cout << "Enter a person's name: ";
    cin>>namee;

    branded();
    information();
    invoiced();

    getch();
}


