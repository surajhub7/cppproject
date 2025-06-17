#include <iostream>
#include <string>
using namespace std;

char getGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string name;
    int marks[5]; 
    for (int i = 1; i <= n; i++) {
        cout << "\nStudent " << i << ":\n";
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        int total = 0;
        for (int j = 0; j < 5; j++) {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> marks[j];
            total += marks[j];
        }

        float percentage = total / 5.0;
        char grade = getGrade(percentage);

        cout << "\nResult for " << name << ":\n";
        cout << "Total Marks: " << total << "/500\n";
        cout << "Percentage: " << percentage << "%\n";
        cout << "Grade: " << grade << "\n";
    }

    return 0;
}
