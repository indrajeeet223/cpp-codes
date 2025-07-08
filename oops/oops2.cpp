#include<iostream>
using namespace std;

class player{
    private:
    int health;
    int score;

    public:
    void sethealth(int h)
    {
        health=h;
    }

    void setscore(int s)
    {
        score=s;

    }

    void showhealth()
    {
        cout<<"health is"<<health;
    }
    void showscore()
    {
        cout<<"score is"<<score;
    }
};


int main()
{
     player amit;
     player harsh;

     amit.sethealth(99);
     harsh.sethealth(98);

     amit.setscore(89);
     harsh.setscore(88);

     amit.showhealth();
     harsh.showhealth();

     amit.showscore();
     harsh.showscore();

     // amit.health=100;  health is private . 


}