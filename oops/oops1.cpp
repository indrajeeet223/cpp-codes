#include<iostream>
using namespace std;
class player{
    public:
    int Health;  // data members
    int score;
    string name;
    void showhelth()  // member funciton 
    {
       
        cout<<"health of "<<name<<" is "<<Health;
    }

};
int main()
{
 player amit;
 amit.Health=100;
 amit.score=22;
 amit.name="Amit";
 
 player harsh;
 harsh.name="harsh";
 harsh.score=90;
 harsh.Health=15;

 amit.showhelth();



}