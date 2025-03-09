#include<bits/stdc++.h>
using namespace std;

class Student{
    public :

    int roll;
    string name;

    Student()
    {
        roll = 0;
        name = "";
        gpa = 0;
    }

    Student(string name , int roll , float gpa)
    {
        this -> name = name;
        this -> roll = roll;
        this -> gpa = gpa;
    }

    void display()
    {
        cout << name << " " << roll << " " << gpa << endl;
    }

    float ans()
    {
        return gpa;
    }

    private:
    float gpa;

    // void display()
    // {
    //     cout << name << " " << roll << " " << gpa << endl;
    // }
};

int main()
{
    Student s1 ("soham" , 1 , 9.6);
    Student s2;
    s2.roll = 10;
    s2.name = "Rahul";
    // s2.gpa = 8.8;      // invalid as gpa is private and we are trying to access it outise the class function.

    s1.display();      // as gpa is private

    cout << s1.ans();

    return 0 ;

}