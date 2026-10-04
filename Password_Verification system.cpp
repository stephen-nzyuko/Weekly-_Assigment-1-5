#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const string USERNAME = "admin";
    const string PASSWORD = "secure123";

    string inputUsername, inputPassword;

    cout << "===== PASSWORD VERIFICATION SYSTEM =====\n";

    
    do {
        cout << "\nEnter username: ";
        cin >> inputUsername;

        cout << "Enter password: ";
        cin >> inputPassword;

        
        if (inputUsername == USERNAME && inputPassword == PASSWORD) {
            cout << "\nAccess Granted! Welcome, " << inputUsername << "." << endl;
        } else {
            cout << "Incorrect credentials, try again." << endl;
        }
    } while (inputUsername != USERNAME || inputPassword != PASSWORD);
    cout<<"========Verification confimed=======";

    return 0;
}