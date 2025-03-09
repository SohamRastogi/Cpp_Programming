#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public :
    int runs;
    string name;
    float avg;

    Cricketer(string name , int runs , float avg)
    {
        this -> name = name;
        this -> runs = runs;
        this -> avg = avg;
    }
    void print()
    {
        cout << this -> name << " " << this -> runs << " " << this -> avg <<  endl;
    }

    int matches()
    {
        return this -> runs / this -> avg;
    }
};

int main()
{
    Cricketer c1("Virat Kohli" , 25000 , 60);
    Cricketer c2("Rohit Sharma" , 18000 , 45);

    c1.print() ;
    c2.print() ;

    int virat = c1.matches();
    int rohit = c2.matches();

    cout << virat << " " << rohit << endl;

    return 0 ;
}