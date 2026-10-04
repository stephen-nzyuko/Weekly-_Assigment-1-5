#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string studentName;
    int age;
    double examScore;

    
    cout << "===== Kyu ADMISSION SYSTEM =====\n";
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    
    cout << "\n========== Kyu ADMISSION DECISION ==========\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Age: " << age << endl;
    cout << "Exam Score: " << examScore << endl;

    
    if (age >= 18) {
        
        if (examScore >= 50) {
            cout << "Decision: ADMITTED" << endl;
        } else {
            cout << "Decision: NOT ADMITTED - Low Score" << endl;
        }
    } else {
        
        cout << "Decision: NOT ADMITTED - Underage" << endl;
    }
    cout << "========================================\n";
    

    return 0;
}