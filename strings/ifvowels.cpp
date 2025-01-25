#include<iostream>
using namespace std;
int main()
{
    string x="indrajeet";
    int count;
    int i=0;
    while(x[i]!='\0')   // null character 
    {
if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') count++;
        i++;
    }
    cout<<count;
}
/*#include<iostream>
using namespace std;
int main()
{
    string x="indrajeet";
    int count;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') count++;
       
    }
    cout<<count;
}*/