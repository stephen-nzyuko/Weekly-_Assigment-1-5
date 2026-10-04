#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    string employeeName;
    double basicSalary, bonus, totalSalary;

    cout << "===== EMPLOYEE BONUS SYSTEM =====\n";

    
    for (int i = 1; i <= 5; i++) {
        cout << "\n--- Employee " << i << " ---\n";

        cout << "Enter employee name: ";
        cin.ignore(); 
        getline(cin, employeeName);

        cout << "Enter basic salary (KSh): ";
        cin >> basicSalary;

        
        bonus = 0.05 * basicSalary;

        
        totalSalary = basicSalary + bonus;

        
        cout << "\n--- Pay Report for " << employeeName << " ---\n";
        cout << left << setw(20) << "Basic Salary:" << fixed << setprecision(2) << basicSalary << endl;
        cout << left << setw(20) << "Bonus (5%):" << fixed << setprecision(2) << bonus << endl;
        cout << left << setw(20) << "Total Salary:" << fixed << setprecision(2) << totalSalary << endl;
        
        cout<<"==========welcome==========";
    }

    return 0;
}