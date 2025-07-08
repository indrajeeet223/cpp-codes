#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float attendance;
    char grade;
    long long phone;
    Student* next;
};

Student* head = NULL;

void addStudent() {
    Student* newStudent = new Student;
    cout << "enter roll numbr: ";
    cin >> newStudent->roll;
    Student* temp = head;
    while (temp != NULL) {
        if (temp->roll == newStudent->roll) {
            cout << "roll number alrady exists. try again.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "enter name: ";
    cin >> newStudent->name;
    cout << "enter atendance: ";
    cin >> newStudent->attendance;
    cout << "enter grade: ";
    cin >> newStudent->grade;
    cout << "enter phone numbr: ";
    cin >> newStudent->phone;
    newStudent->next = head;
    head = newStudent;
    cout << "student added succesfully!\n";
}

void displayStudents() {
    if (head == NULL) {
        cout << "no student data avilable.\n";
        return;
    }
    Student* temp = head;
    while (temp != NULL) {
        cout << "roll no: " << temp->roll<<"\n";
        cout<<"name :- "<<temp->name<<"\n";
        cout<<"attendence :- "<<temp->attendance<<"%\n";
        cout<<"grade :- "<<temp->grade<<" \n";
        cout<<"phone no :- "<<temp->phone<<" \n";
        temp = temp->next;
    }
}

void searchStudent() {
    int roll;
    cout << "enter roll numbr to search: ";
    cin >> roll;
    Student* temp = head;
    while (temp != NULL) {
        if (temp->roll == roll) {
            cout << "student found!\nname: " << temp->name
                 << "\nattndance: " << temp->attendance
                 << "\ngrade: " << temp->grade
                 << "\nphone no: " << temp->phone << "\n";
            return;
        }
        temp = temp->next;
    }
    cout << "student not found!\n";
}

void deleteStudent() {
    int roll;
    cout << "enter roll numbr to delete: ";
    cin >> roll;
    if (head == NULL) {
        cout << "no students to delete.\n";
        return;
    }
    if (head->roll == roll) {
        Student* temp = head;
        head = head->next;
        delete temp;
        cout << "student deleted succesfully!\n";
        return;
    }
    Student* temp = head;
    while (temp->next != NULL) {
        if (temp->next->roll == roll) {
            Student* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "student deleted succesfully!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "student not found!\n";
}

void updateStudent() {
    int roll;
    cout << "enter roll numbr to update: ";
    cin >> roll;
    Student* temp = head;
    while (temp != NULL) {
        if (temp->roll == roll) {
            cout << "enter new name: ";
            cin >> temp->name;
            cout << "enter new atendance: ";
            cin >> temp->attendance;
            cout << "enter new grade: ";
            cin >> temp->grade;
            cout << "enter new phone numbr: ";
            cin >> temp->phone;
            cout << "student data updated succesfully!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "student not found!\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\nmenu:\n";
        cout << "1. add student\n";
        cout << "2. display students\n";
        cout << "3. search student\n";
        cout << "4. delete student\n";
        cout << "5. update student\n";
        cout << "6. exit\n";
        cout << "enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                updateStudent();
                break;
            case 6:
                cout << "exiting program\n";
                return 0;
            default:
                cout << "invalid choice\n";
        }
    }
    return 0;
}
