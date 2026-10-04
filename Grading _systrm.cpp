#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string studentName;
    int examMarks;
    char grade;

    
    cout << "===== GRADING SYSTEM =====\n";
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0-100): ";
    cin >> examMarks;

    
    if (examMarks < 0 || examMarks > 100) {
        cout << "Invalid marks! Please enter between 0 and 100." << endl;
        return 1;
    }

    
    if (examMarks >= 70 && examMarks <= 100) {
        grade = 'A';
    } else if (examMarks >= 60 && examMarks <= 69) {
        grade = 'B';
    } else if (examMarks >= 50 && examMarks <= 59) {
        grade = 'C';
    } else if (examMarks >= 40 && examMarks <= 49) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    
    cout << "\n========== STUDENT GRADE ==========\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Exam Marks: " << examMarks << endl;
    cout << "Grade: " << grade << endl;
    cout << "===================================\n";

    return 0;
}