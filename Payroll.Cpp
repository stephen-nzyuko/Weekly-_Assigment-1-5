#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


const double RATE_PER_HOUR = 500.0; // KSh per overtime hour


void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary (KSh): ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}


double calculateOvertimePay(double overtimeHours) {
    return overtimeHours * RATE_PER_HOUR;
}


double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}


void displayPayslip(string name, double basicSalary, double overtimeHours,
                    double overtimePay, double netSalary) {
    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
    cout << left << setw(25) << "Employee Name:" << name << endl;
    cout << left << setw(25) << "Basic Salary (KSh):" << fixed << setprecision(2) << basicSalary << endl;
    cout << left << setw(25) << "Overtime Hours:" << overtimeHours << endl;
    cout << left << setw(25) << "Overtime Pay (KSh):" << fixed << setprecision(2) << overtimePay << endl;
    cout << left << setw(25) << "Net Salary (KSh):" << fixed << setprecision(2) << netSalary << endl;
    cout << "======================================\n";
}

int main() {
    
    string employeeName;
    double basicSalary, overtimeHours, overtimePay, netSalary;

    cout << "===== PAYROLL SYSTEM =====\n";

    
    getEmployeeDetails(employeeName, basicSalary, overtimeHours);
    overtimePay = calculateOvertimePay(overtimeHours);
    netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(employeeName, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}