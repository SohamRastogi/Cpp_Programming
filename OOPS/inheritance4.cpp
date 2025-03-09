#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public :
    int tyres;
    int speed;
    string fuel;
};

class TwoWheelers : public Vehicle{
    public :
    int killcount;
};

class Scooter : public TwoWheelers{
    public : 
    int gears;

    void display()
    {
        cout << this -> gears << " " << this -> killcount << " " << this -> tyres << " " << this -> speed  << "  " << this -> fuel << endl;
    }
};

int main()
{

    Scooter s1;
    s1.gears = 4;
    s1.killcount = 100;
    s1.tyres = 2;
    s1.speed = 80;
    s1.fuel = "Petrol";

    s1.display();

    return 0 ;

}