#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generatePassword(int length) {
    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowercase = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string special = "!@#$%^&*()-_=+<>?";
    
    string all = uppercase + lowercase + digits + special;
    string password = "";

    srand(time(0)); 

    for (int i = 0; i < length; i++) {
        int index = rand() % all.length(); 
        password += all[index];
    }

    return password;
}

int main() {
    int length;
    
    cout << "=== PASSWORD GENERATOR ===\n";
    cout << "Enter password length: ";
    cin >> length;

    if (length <= 0) {
        cout << "Password length must be greater than 0.\n";
        return 0;
    }

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
