// code works in online compiler .
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>v;
    v.push(100);
    v.push(200);
    v.push(300);
    v.push(400);
    v.push(500);  //  values insert in stack done .
    stack<int>temp;
   
    while (v.size()>0)
    {
        cout<<v.top()<<" ";
        int x=v.top();
        v.pop();
        temp.push(x);

    }
     while (temp.size()>0)
    {
        int y=temp.top();
        temp.pop();
        v.push(y);

    }
    cout<<endl<<v.top();

    
}
/*// code works in online compiler .
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>v;
    v.push(100);
    v.push(200);
    v.push(300);
    v.push(400);
    v.push(500);  //  values insert in stack done .
    stack<int>temp;
   
    while (v.size()>0)
    {
        
        int x=v.top();
        v.pop();
        temp.push(x);

    }
     while (temp.size()>0)
    {
        cout<<temp.top()<<" ";
        int y=temp.top();
        temp.pop();
        v.push(y);

    }
   
    
}*/