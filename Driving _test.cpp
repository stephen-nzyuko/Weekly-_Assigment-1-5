#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    
    cout << "===== DRIVING TEST RESULT EVALUATION =====\n";
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    
    averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << "\n========== TEST RESULT ==========\n";
    cout << left << setw(20) << "Student Name:" << studentName << endl;
    cout << left << setw(20) << "Theory Marks:" << theoryMarks << endl;
    cout << left << setw(20) << "Practical Marks:" << practicalMarks << endl;
    cout << left << setw(20) << "Average Score:" << fixed << setprecision(2) << averageScore << endl;

    
    if (averageScore >= 50) {
        cout << left << setw(20) << "Result:" << "PASSED" << endl;
    } else {
        cout << left << setw(20) << "Result:" << "FAILED" << endl;
    }
    cout << "===========AA Driving School==========\n";

    return 0;
}