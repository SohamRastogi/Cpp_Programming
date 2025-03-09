#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:

    string name;
    int runs;

     Cricketer(string name , int runs)
     {
        this -> name = name;
        this -> runs = runs;
     }
};

int main()
{
    //! error nahi aayega, but garbage value occurs :
    //* Cricketer c1("Virat Kohli" , 25000);
    //* Cricketer c2("Rohit Sharma" , 18000);

    //* cout << c1.name << " " << c2.runs << endl;
    //* cout << c2.name << " " << c2.runs << endl;

    Cricketer c1("Virat Kohli" , 25000);
    Cricketer c2("Rohit Sharma" , 18000);

    cout << c1.name << " " << c2.runs << endl;
    cout << c2.name << " " << c2.runs << endl;

      

    

    return 0 ;
}