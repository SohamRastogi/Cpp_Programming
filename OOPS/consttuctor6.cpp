#include<bits/stdc++.h>
using namespace std;

class Student{
    public :
    
    string name;
    int roll;
    float gpa;

    Student(string s, int r, float g)
    {
        name = s;
        roll = r;
        gpa = g;
    }

    Student(Student &s)
    {
        name = s.name;
        roll = s.roll;
        gpa = s.gpa;
    }
};

int main()
{
    Student s1 ("soham" , 1 , 9.2);
    Student s2(s1);

    s2.name = "rahul";

    cout << s1.name << " " << s1.roll << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.roll << " " << s2.gpa << endl;

    return 0;
}