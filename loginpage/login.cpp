#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    string correctUsername = "Haruto";
    string correctPassword = "1234";

    cout << "=== Simple Login System ===\n";
    
    cout << "Enter username: ";
    getline(cin, username);
    
    cout << "Enter password: ";
    getline(cin, password);

    if (username == correctUsername && password == correctPassword) {
        cout << "Login successful! Welcome, " << username << ".\n";
    } else {
        cout << "Login failed! Invalid username or password.\n";
    }

    return 0;
}
