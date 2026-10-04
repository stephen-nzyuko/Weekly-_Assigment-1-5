#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double accountBalance, withdrawalAmount;

    cout << "===== SAVINGS WITHDRAWAL SYSTEM =====\n";

    
    cout << "Enter initial account balance (KSh): ";
    cin >> accountBalance;

    
    while (accountBalance > 0) {
        cout << "\nCurrent Balance: KSh " << fixed << setprecision(2) << accountBalance << endl;
        cout << "Enter withdrawal amount (0 to exit): ";
        cin >> withdrawalAmount;

        
        if (withdrawalAmount == 0) {
            cout << "Exiting. Thank you!" << endl;
            break;
        }

        
        if (withdrawalAmount > accountBalance) {
            cout << "Insufficient balance! Withdrawal amount exceeds balance." << endl;
            cout << "Remaining Balance: KSh " << fixed << setprecision(2) << accountBalance << endl;
            break; 
        } else {
            
            accountBalance -= withdrawalAmount;
            cout << "Withdrawal successful!" << endl;
            cout << "Remaining Balance: KSh " << fixed << setprecision(2) << accountBalance << endl;
        }

        
        if (accountBalance == 0) {
            cout << "Account balance is now zero. No more withdrawals possible." << endl;
            break;
        }
    }

    return 0;
}