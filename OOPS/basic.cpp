#include<bits/stdc++.h>
using namespace std;

class Student{  // class
    public :

    string name;
    int rollnumber;
    float cgpa;
};

int main()
{
    Student s1;  // object
    s1.name = "sbcdef";
    s1.rollnumber = 5;
    s1.cgpa = 9;
    
    Student s2;  // object
    s2.name = "zxcv";
    s2.rollnumber = 6;
    s2.cgpa = 8.6;

    cout << s1.name << " " << s1.rollnumber << " " << s1.cgpa << endl;
    cout << s2.name << " " << s2.rollnumber << " " << s2.cgpa << endl;

    return 0 ;
}