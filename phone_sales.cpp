#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalSalesAmount;

    
    cout << "===== MOBILE PHONE SALES RECEIPT SYSTEM =====\n";
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone (KSh): ";
    cin >> pricePerPhone;
    cout<<"=================================\n";
    cout<<"THANKS FOR SHOPPING WITH US... WELCOME BACK👋👋\n";
cout<<"================================\n";
    
    totalSalesAmount = quantity * pricePerPhone;

    
    cout << "\n========== CUSTOMER RECEIPT ==========\n";
    cout << left << setw(25) << "Customer Name:" << customerName << endl;
    cout << left << setw(25) << "Phone Model:" << phoneModel << endl;
    cout << left << setw(25) << "Quantity:" << quantity << endl;
    cout << left << setw(25) << "Price Per Phone (KSh):" << fixed << setprecision(2) << pricePerPhone << endl;
    cout << left << setw(25) << "Total Sales Amount (KSh):" << fixed << setprecision(2) << totalSalesAmount << endl;
    cout << "======================================\n";

    return 0;
}