#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public :
    int runs;
    string name;

    Cricketer(string name , int runs)
    {
        this -> name = name;
        this -> runs = runs;
    }

    void print()
    {
        cout << this -> name << " " <<  this -> runs << endl;
    }

};
int main()
{
    Cricketer c1("Virat Kohli" , 25000);
    Cricketer c2("Rohit Sharma" , 18000);
    
    c1.print() ;
    c2.print() ;

    return 0 ;
}