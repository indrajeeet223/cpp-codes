#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*string x="hi my name is indrajeet kokate .";
    int n=x.size();
    int m=x.length();
    cout<<n<<endl;
    cout<<m;*/
  string z="abcdef";
  cout<<z<<endl;
  z.push_back('g');
  z.push_back('h');
  z.push_back('i');
  z.push_back('j');
  z.pop_back();
  cout<<z;

}