#include <iostream>
using namespace std;

int main() {
    int students, attendance;
    int present = 0, absent = 0;

    cout << "Enter the number of students: ";
    cin >> students;

    for (int i = 1; i <= students; i++) {
        cout << "Student " << i
             << " (1 = Present, 0 = Absent): ";
        cin >> attendance;

        if (attendance == 1) {
            cout << "Student " << i << ": Present" << endl;
            present++;
        } else if (attendance == 0) {
            cout << "Student " << i << ": Absent" << endl;
            absent++;
        } else {
            cout << "Invalid input! Enter 1 or 0." << endl;
            i--;
        }
    }

    double percentage = (double) present / students * 100;

    cout << "\n--- Attendance Summary ---" << endl;
    cout << "Total Present: " << present << endl;
    cout << "Total Absent: " << absent << endl;
    cout << "Attendance Percentage: "
         << percentage << "%" << endl;

    return 0;
}