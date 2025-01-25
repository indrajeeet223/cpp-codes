#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // return the maximum number in the vector using sstream
    string s;
    vector<string>v;
    cout<<"enter the number :\n ";
    getline(cin,s);
    stringstream ass(s);
    string temp;
    while(ass>>temp)
    {
     v.push_back(temp);   
    }
    int sex=0;
    for(int i=0;i<v.size();i++)
    {
        // convert string to number .
        int x=stoi(v[i]);
        if(x>sex) sex=x;
        
    }
    cout<<sex;
}