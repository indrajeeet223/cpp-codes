#include<iostream>
#include<unordered_map>
using namespace std;
using namespace std;
int main()
{
    
    unordered_map<int, pair<string, pair<float,pair<char,long long>>>>s;

    cout<<"Enter the number of students in the class: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of  "<<i+1<<"nd student :";
        string name;
        cin>>name;
        cout<<"Enter the roll number of student:";
        int roll;
        cin>>roll;
        if(s.find(roll)!=s.end())
        {
            cout<<"Student roll already exists!\n";
            continue;
        }
        cout<<"Enter the attendence of student :";
        float att;
        cin>>att;
        cout<<"Enter the phone number of student :";
        long long phone;
        cin>>phone;
        cout<<"Enter the grade of student :";
        char grade;
        cin>>grade;
        
        s[roll]={name,{att,{grade,phone}}};

    }
    cout<<"\nStudent Records:\n";
    for(auto p:s)
    {
        cout<<"Roll No: "<<p.first<<" | Name: "<<p.second.first<<" | Attendence: "<<p.second.second.first<<" | Grade: "<<p.second.second.second.first<<" | Phone No: "<<p.second.second.second.second<<endl;

    }
    cout<<"Enter the roll number of the student you want to search: ";\
    int roll;
    cin>>roll;
    if(s.find(roll)!=s.end())
    {
        cout<<"student found!\n";
        cout<<"Name: "<<s[roll].first<<endl;    
        cout<<"Attendence: "<<s[roll].second.first<<endl;
        cout<<"Grade: "<<s[roll].second.second.first<<endl;
        cout<<"Phone No: "<<s[roll].second.second.second<<endl;
        
    }
    cout<<"Enter the roll number of the student you want to delete: ";
    cin>>roll;
    if(s.find(roll)!=s.end())
    {
        s.erase(roll);
        cout<<"Student data deleted successfully!\n";
    }
    else
    {
        cout<<"Student not found!\n";
    }
    cout<<"Enter the roll number of the student you want to update: ";
    cin>>roll;
    if(s.find(roll)!=s.end())
    {
        cout<<"Enter the new name of the student: ";
        string name;
        cin>>name;
        cout<<"Enter the new attendence of the student: ";
        float att;
        cin>>att;
        cout<<"Enter the new grade of the student: ";
        char grade;
        cin>>grade;
        cout<<"Enter the new phone number of the student: ";
        long long phone;
        cin>>phone;
        s[roll]={name,{att,{grade,phone}}};
        cout<<"Student data updated successfully!\n";
    }
    else
    {
        cout<<"Student not found!\n";
    }
}
