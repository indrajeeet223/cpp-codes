#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int roll;
        float percentage;
        student(string s,int rol,float per)  // constructor to initilize and make together derived data types.
        {
                (*this).name=s;               // derefrence operator 
                this->roll=rol;
                this->percentage=per;
        }
};
void changemarks(student *s)
{
    (*s).roll=37;
    cout<<s->roll;
}
int main()
{
    student s1("indra",12,21);
    cout<<s1.name;
    student *ptr=&s1;
   (*ptr).name="abhi";  // ptr->name="xyz";
   cout<<s1.name;
   changemarks(&s1);








}