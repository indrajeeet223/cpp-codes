#include<iostream>
#include<unordered_map>
using namespace std;
using namespace std;
int main()
{
    
    unordered_map<int, pair<string, pair<float,pair<char,long long>>>>s;

    cout<<"enter the number of student in your class : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the name of  "<<i+1<<"nd student :";
        string name;
        cin>>name;
        cout<<"enter the roll number of student:";
        int roll;
        cin>>roll;
        if(s.find(roll)!=s.end())
        {
            cout<<"roll number is already exists \n";
            continue;
        }
        cout<<"enter the attendence :";
        float att;
        cin>>att;
        cout<<"enter the phone number :";
        long long phone;
        cin>>phone;
        cout<<"enter the grade of student :";
        char grade;
        cin>>grade;
        
        s[roll]={name,{att,{grade,phone}}};

    }
    cout<<"\nStudent data :\n";
    for(auto p:s)
    {
        cout<<"Roll No: "<<p.first<<" \n Name: "
        <<p.second.first<<"\n  attendence: "<<p.second.second.first<<"\n  Grade: "
        <<p.second.second.second.first<<" \n Phone No: "<<p.second.second.second.second<<endl;

    }
    cout<<"Enter the roll number of the student you want to search: ";\
    int roll;
    cin>>roll;
    if(s.find(roll)!=s.end())
    {
        cout<<"student found!\n";
        cout<<"name: "<<s[roll].first<<endl;    
        cout<<"attendence: "<<s[roll].second.first<<endl;
        cout<<"grade: "<<s[roll].second.second.first<<endl;
        cout<<"Phone No: "<<s[roll].second.second.second<<endl;
        
    }
    else {
    cout<<"roll number is not exists \n";
    }
    cout<<"enter the roll number of the student you want to delete: ";
    cin>>roll;
    if(s.find(roll)!=s.end())
    {
        s.erase(roll);
        cout<<"student data deleted successfully!\n";
    }
    else
    {
        cout<<"student not found!\n";
    }
    cout<<"enter the roll number of the student you want to update: ";
    cin>>roll;
    if(s.find(roll)!=s.end())
    {
        cout<<"enter the new name of the student: ";
        string name;
        cin>>name;
        cout<<"enter the new attendence of the student: ";
        float att;
        cin>>att;
        cout<<"enter the new grade of the student: ";
        char grade;
        cin>>grade;
        cout<<"enter the new phone number of the student: ";
        long long phone;
        cin>>phone;
        s[roll]={name,{att,{grade,phone}}};
        cout<<"student data updated successfully!\n";
    }
    else
    {
        cout<<"student not found!\n";
    }
}
