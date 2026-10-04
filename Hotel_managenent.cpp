#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "===== HOTEL MANAGEMENT SYSTEM =====\n";

    
    cout << "\n--- Weekly Revenue Tracker ---\n";
    double revenue[7];
    double totalWeeklyRevenue = 0.0;

    const string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                            "Friday", "Saturday", "Sunday"};

    
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for " << days[i] << " (KSh): ";
        cin >> revenue[i];
        totalWeeklyRevenue += revenue[i];
    }

    
    double averageDailyRevenue = totalWeeklyRevenue / 7.0;
    cout << "\nTotal Weekly Revenue: KSh " << fixed << setprecision(2) << totalWeeklyRevenue << endl;
    cout << "Average Daily Revenue: KSh " << fixed << setprecision(2) << averageDailyRevenue << endl;

    
    cout << "\n--- Room Occupancy (One Branch) ---\n";
    int occupancy[5][10]; 

    srand(time(0));
    
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }

    
    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << (floor + 1) << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    
    cout << "\n--- Multiple Branches Occupancy ---\n";
    int chain[3][5][10]; 
    int totalOccupiedAllBranches = 0;

    
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupiedAllBranches++;
            }
        }
    }

    
    cout << "Total Occupied Rooms Across All Branches: " << totalOccupiedAllBranches << endl;
    cout << "Total Rooms Across All Branches: " << (3 * 5 * 10) << endl;
    
cout<<"=======Enjoy our services=========\n";
    return 0;
}