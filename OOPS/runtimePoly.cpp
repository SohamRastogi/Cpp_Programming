#include<bits/stdc++.h>
using namespace std;

class Scooty{
    public :
    int mileage;
    int speed;

    // Scooty()
    // {
    //     cout << "got a new scooty" << endl;
    // }
    void sound()
    {
        cout << "scooty - scooty" << endl;
    }
};

class Bike : public Scooty{
    public :
    int gears;

    // Bike()
    // {
    //     cout << "got a new bike" << endl;
    // }

    void sound()
    {
        cout << "bike - bike" << endl;
    }
};

int main()
{
    Bike* b = new Bike();
    b->sound();
    Bike b1;    
    Bike b2;
    Scooty s1;

    b1.sound();

    return 0 ;
}