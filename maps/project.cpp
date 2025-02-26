#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, pair<string, pair<float, pair<char, long long>>>> students;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Insert Student Record\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Delete Student by Roll Number\n";
        cout << "5. Update Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {  // Insert Student
            int roll;
            string name;
            float att;
            char grade;
            long long phone;

            cout << "Enter roll number: ";
            cin >> roll;
            if (students.find(roll) != students.end()) {
                cout << "Student roll number already exists!\n";
                continue;
            }

            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter attendance percentage: ";
            cin >> att;
            cout << "Enter grade: ";
            cin >> grade;
            cout << "Enter phone number: ";
            cin >> phone;

            students[roll] = {name, {att, {grade, phone}}};
            cout << "Student record added successfully!\n";
        } 
        else if (choice == 2) {  // Display Students
            if (students.empty()) {
                cout << "No student records available!\n";
                continue;
            }

            cout << "\n===== Student Records =====\n";
            for (const auto &p : students) {
                cout << "Roll No: " << p.first 
                     << " | Name: " << p.second.first 
                     << " | Attendance: " << p.second.second.first 
                     << " | Grade: " << p.second.second.second.first 
                     << " | Phone: " << p.second.second.second.second << endl;
            }
        } 
        else if (choice == 3) {  // Search Student
            int roll;
            cout << "Enter roll number to search: ";
            cin >> roll;

            if (students.find(roll) != students.end()) {
                cout << "Student found!\n";
                cout << "Name: " << students[roll].first << endl;
                cout << "Attendance: " << students[roll].second.first << endl;
                cout << "Grade: " << students[roll].second.second.first << endl;
                cout << "Phone No: " << students[roll].second.second.second << endl;
            } else {
                cout << "Student not found!\n";
            }
        } 
        else if (choice == 4) {  // Delete Student
            int roll;
            cout << "Enter roll number to delete: ";
            cin >> roll;

            if (students.erase(roll)) {
                cout << "Student record deleted successfully!\n";
            } else {
                cout << "Student not found!\n";
            }
        } 
        else if (choice == 5) {  // Update Student
            int roll;
            cout << "Enter roll number to update: ";
            cin >> roll;

            if (students.find(roll) != students.end()) {
                string name;
                float att;
                char grade;
                long long phone;

                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter new attendance percentage: ";
                cin >> att;
                cout << "Enter new grade: ";
                cin >> grade;
                cout << "Enter new phone number: ";
                cin >> phone;

                students[roll] = {name, {att, {grade, phone}}};
                cout << "Student record updated successfully!\n";
            } else {
                cout << "Student not found!\n";
            }
        } 
        else if (choice == 6) {  // Exit
            cout << "Exiting program...\n";
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
