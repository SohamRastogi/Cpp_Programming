#include<bits/stdc++.h>
using namespace std;

class Scooty{
    public :
    int topSpeed;
    float mileage;

    private:
    int bootspace;
};

class Bike : public Scooty{  // child class.
    public:
    int gears;

    void display()
    {
        cout << this -> topSpeed << " " << this -> mileage << " " << this -> gears << endl;
    }
};

int main()
{
    Bike b1;
    b1.topSpeed = 100;
    b1.mileage = 50.4;
    b1.gears = 8;

    // b1.bootspace = 100;  => invalid as bootspace is a private member of Scooty class but we are only inheriting it's public members in the Bike class. 

    b1.display();

    return 0 ;
}