#include<bits/stdc++.h>
using namespace std;

class Student{
    public :

    string name;
    int roll;

    // private :

    float gpa;

    void display()
    {
        cout << this -> name << " " << this -> roll << " " << this -> gpa << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "rahul";
    s1.roll = 10;
    s1.gpa = 9.2;

    s1.display();

    return 0 ;

}