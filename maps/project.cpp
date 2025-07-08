#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int, pair<string, pair<float, pair<char, long long>>>> s;

void addStudent() {
    cout << "Enter the name of the student: ";
    string name;
    cin >> name;
    cout << "Enter the roll number of student: ";
    int roll;
    cin >> roll;

    if (s.find(roll) != s.end()) {
        cout << "Student roll already exists!\n";
        return;
    }

    cout << "Enter the attendance of student: ";
    float att;
    cin >> att;
    cout << "Enter the phone number of student: ";
    long long phone;
    cin >> phone;
    cout << "Enter the grade of student: ";
    char grade;
    cin >> grade;

    s[roll] = {name, {att, {grade, phone}}};
    cout << "Student added successfully!\n";
}

void searchStudent() {
    cout << "Enter the roll number of the student you want to search: ";
    int roll;
    cin >> roll;

    if (s.find(roll) != s.end()) {
        cout << "Student found!\n";
        cout << "Name: " << s[roll].first << endl;
        cout << "Attendance: " << s[roll].second.first << endl;
        cout << "Grade: " << s[roll].second.second.first << endl;
        cout << "Phone No: " << s[roll].second.second.second << endl;
    } else {
        cout << "Student not found!\n";
    }
}

void deleteStudent() {
    cout << "Enter the roll number of the student you want to delete: ";
    int roll;
    cin >> roll;

    if (s.find(roll) != s.end()) {
        s.erase(roll);
        cout << "Student data deleted successfully!\n";
    } else {
        cout << "Student not found!\n";
    }
}

void updateStudent() {
    cout << "Enter the roll number of the student you want to update: ";
    int roll;
    cin >> roll;

    if (s.find(roll) != s.end()) {
        cout << "Enter the new name of the student: ";
        string name;
        cin >> name;
        cout << "Enter the new attendance of the student: ";
        float att;
        cin >> att;
        cout << "Enter the new grade of the student: ";
        char grade;
        cin >> grade;
        cout << "Enter the new phone number of the student: ";
        long long phone;
        cin >> phone;

        s[roll] = {name, {att, {grade, phone}}};
        cout << "Student data updated successfully!\n";
    } else {
        cout << "Student not found!\n";
    }
}

void displayAllStudents() {
    cout << "\nStudent Records:\n";
    for (auto p : s) {
        cout << "Roll No: " << p.first << " | Name: " << p.second.first
             << " | Attendance: " << p.second.second.first<<" %"
             << " | Grade: " << p.second.second.second.first
             << " | Phone No: " << p.second.second.second.second << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Search Student\n";
        cout << "3. Delete Student\n";
        cout << "4. Update Student\n";
        cout << "5. Display All Students\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                searchStudent();
                break;
            case 3:
                deleteStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                displayAllStudents();
                break;
            case 6:
                cout << "Exiting the system...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}