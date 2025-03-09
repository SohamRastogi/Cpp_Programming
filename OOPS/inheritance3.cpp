#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public :
    int topSpeed;
    int mileage;
    string fuel;
};

class Car : public Vehicle{
    public :
    int seater;

    void display()
    {
        cout << this -> topSpeed << " " << this -> mileage << " " << this -> fuel << " " << this -> seater << endl;
    }
};

class Truck : public Vehicle{
    public :
    int killcount;
};

int main()
{
    Car mercedes;
    mercedes.topSpeed = 200;
    mercedes.mileage = 20;
    mercedes.fuel = "Diesel";
    mercedes.seater = 5;

    mercedes.display();

    return 0 ;
}