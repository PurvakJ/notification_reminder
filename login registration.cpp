#include<iostream>
#include<fstream>
#include<vector>
#include <sstream>

using namespace std;
struct User {
    string username;
    string password;
    string email;
    // other user information
};

void addUser(User user) {
    ofstream file("users.txt", ios::app);
    file << user.username << "," << user.password << "," << user.email << endl;
    file.close();
}

vector<User> getUsers() {
    vector<User> users;
    ifstream file("users.txt");
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
int main() {
    label:
    string choice;
    int maine;
    cout << "Login or register? ";
    cin >> choice;
    if (choice == "login") {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        if (login(username, password)) {
            cout << "Login successful!" << endl;
        } else {
            cout << "Invalid username or password." << endl;
        }
    } else if (choice == "register") {
        string username, password, email;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        cout << "Enter email: ";
        cin >> email;
        registerUser(username, password, email);
        cout << "Registration successful!" << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
    cout<<"if you want to go to the main page "<<endl<<"press 1"<<endl;
    cin>>maine;
    if(maine==1)
        goto label;
    else
    return 0;
}

