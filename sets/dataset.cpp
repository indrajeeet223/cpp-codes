#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, pair<string, long long>> s;

    cout << "Enter the number of students in the class: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter the name of the student: ";
        string name;
        cin >> name;
        
        cout << "Enter the roll number of the student: ";
        int roll;
        cin >> roll;
        
        cout << "Enter the phone number of the student: ";
        long long phone;
        cin >> phone;

        
        s[roll] = {name, phone};
    }

    cout << "\nStudent Records:\n";
    for (const auto &p : s)   
        cout << "Roll No: " << p.first 
             << " | Name: " << p.second.first 
             << " | Phone No: " << p.second.second << endl;

   cout<<"Enter the roll number of the student you want to search: ";
    int roll;
    cin >> roll;
    if (s.find(roll) != s.end()) {
        cout << "Student found!\n";
        cout << "Name: " << s[roll].first << endl;
        cout << "Phone No: " << s[roll].second << endl;
    } else {
        cout << "Student not found!\n";
    }
    cout<<"Emter the roll number of the student you want to delete: ";
    cin>>roll;
    s.erase(roll);
    cout<<"Student data deleted successfully!\n";


}
