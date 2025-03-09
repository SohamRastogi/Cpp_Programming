#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int roll;
    float cgpa;

    Student(string naam, int rollnums){
        name = naam;
        roll = rollnums;
    }
};

int main()
{
    Student s1("Alpha", 1);  // valid 
    s1.cgpa = 9.2;

    cout << s1.name <<" "<<s1.roll << " " << s1.cgpa << endl;

    return 0;
} 