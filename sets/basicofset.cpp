#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);  // set insert only unique values :
    s.erase(5);
    int target =4;
    if(s.find(target)!=s.end()) cout<<"exists ";
    else cout<<"not ";
    for(int ele :s)
    {
        cout<<ele<<" ";
    }
}
