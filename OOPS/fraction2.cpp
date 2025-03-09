#include<bits/stdc++.h>
using namespace std;

class Fraction{
    public :

    int num;
    int den;

    Fraction(int num , int den)
    {
        this -> num = num;
        this -> den = den;
    }

    void display()
    {
        cout << this -> num << "/" << this -> den << endl;
    }

    Fraction operator+(Fraction f2)
    {
        int newNumerator = this -> num * f2.den + this -> den * f2.num;
        int newDenominator = this -> den * f2.den;

        Fraction ans(newNumerator , newDenominator);

        return ans;
    }
};

int main()
{
    Fraction f1(1,2);
    Fraction f2(1,3);

    f1.display();
    f2.display();

    // Fraction f3 = f1.add(f2);

    Fraction f3 = f1 + f2;

    f3.display();

    return 0;
}