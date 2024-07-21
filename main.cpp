/*
Declare two arrays: studentIDs and studentGrades, both with size 10
Declare variables: totalGrades, averageGrade
Declare a loop to input student information:
    For i from 0 to 9:
        Prompt for studentID
        Prompt for studentGrade
        Assign studentID to studentIDs[i]
        Assign studentGrade to studentGrades[i]
        Add studentGrade to totalGrades
    End Forloop

Calculate averageGrade by dividing totalGrades by 10

Declare a loop to display student information:
    For i from 0 to 9:
        Print studentIDs[i], studentGrades[i]
        If studentGrades[i] is greater than or equal to averageGrade:
            Print "grade is A"
        Else:
            Print "grade is C"
    End ForLoop
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentIDs[10];
    int studentGrades[10];
    int totalGrades = 0;
    double averageGrade;

    // Input student information
    for (int i = 0; i < 10; ++i) {
        cout << "Enter student ID for student " << i + 1 << ": ";
        cin >> studentIDs[i];
        cout << "Enter student grade for student " << i + 1 << ": ";
        cin >> studentGrades[i];
        totalGrades += studentGrades[i];
    }

    // Calculate average grade
    averageGrade = totalGrades / 10;

    // Display student information
    for (int i = 0; i < 10; ++i) {
        cout << studentIDs[i] << " " << studentGrades[i] << " ";
        if (studentGrades[i] >= averageGrade) {
            cout << "grade is A" << endl;
        } else {
            cout << "grade is C" << endl;
        }
    }

    return 0;
}