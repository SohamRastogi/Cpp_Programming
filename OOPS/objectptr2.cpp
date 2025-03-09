#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public :
    int runs;
    float avg;
    string name;

    Cricketer(string name , int runs , float avg)
    {
        this -> name = name;
        this -> runs = runs;
        this -> avg = avg;
    }
};

void change(Cricketer& c1)
{
    c1.name = "Rohit";
    c1.runs = 18000;
    c1.avg = 100;

    return ;
}

int main()
{
    Cricketer c1 ("Virat Kohli" , 25000 , 55.2);

    // Cricketer* ptr1 = &c1;

    cout << c1.name << " " << c1.runs << " " << c1.avg << endl;
    
    change(c1);

    cout << c1.name << " " << c1.runs << " " << c1.avg << endl;

    return 0 ;

}