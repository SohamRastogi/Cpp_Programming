#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public :

    int runs;
    float avg;
    string name;

    Cricketer(string name , int runs , float avg)
    {
        this -> name = name ;
        this -> runs = runs;
        this -> avg = avg;
    }

};

int main()
{
    Cricketer c1("Virat Kohli" , 25000 , 55.2);

    Cricketer* ptr1 = &c1;

    cout << ptr1 -> name << " " << ptr1 -> runs << " " << ptr1 -> avg << endl;

    return 0 ;

}