#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public :

    string name;
    int runs;
    float avg;

    Cricketer(string name , int runs , float avg)
    {
        this -> name = name;
        this -> runs = runs;
        this -> avg = avg;
    }
};

void change(Cricketer &c)
{
    c.name = "Rohit Sharma";
    return ;
}

int main()
{ 
    Cricketer c1("Virat Kohli" , 25000 , 55.2);

    cout << c1.name << " " << c1.runs << " " << c1.avg << endl;

    change(c1);

    cout << c1.name << " " << c1.runs << " " << c1.avg << endl;

    return 0 ;
}