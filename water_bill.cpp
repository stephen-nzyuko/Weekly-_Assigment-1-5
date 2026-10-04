#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


const double RATE_PER_UNIT = 100.0; 


void getCustomerDetails(string &name, int &unitsConsumed) {
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}


double calculateBill(int unitsConsumed) {
    return unitsConsumed * RATE_PER_UNIT;
}


double applyDiscount(double bill, int unitsConsumed) {
    if (unitsConsumed > 100) {
        return bill * 0.10; 
    }
    return 0.0;
}


void displayBill(string name, int unitsConsumed, double billBeforeDiscount,
                 double discount, double finalAmount) {
    cout << "\n========== WATER BILL ==========\n";
    cout << left << setw(30) << "Customer Name:" << name << endl;
    cout << left << setw(30) << "Units Consumed:" << unitsConsumed << endl;
    cout << left << setw(30) << "Total Bill Before Discount:" << fixed << setprecision(2) << billBeforeDiscount << endl;
    cout << left << setw(30) << "Discount Applied:" << fixed << setprecision(2) << discount << endl;
    cout << left << setw(30) << "Final Amount Payable:" << fixed << setprecision(2) << finalAmount << endl;
    cout << "================================\n";
}

int main() {
    
    string customerName;
    int unitsConsumed;
    double billBeforeDiscount, discount, finalAmount;

    cout << "===== WATER BILLING SYSTEM =====\n";

    
    getCustomerDetails(customerName, unitsConsumed);
    billBeforeDiscount = calculateBill(unitsConsumed);
    discount = applyDiscount(billBeforeDiscount, unitsConsumed);
    finalAmount = billBeforeDiscount - discount;
    displayBill(customerName, unitsConsumed, billBeforeDiscount, discount, finalAmount);

    return 0;
}