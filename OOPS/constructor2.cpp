#include<bits/stdc++.h>
using namespace std;

class student{
    public :

    string name;
    int rollnumber;
    float gpa;

    student(string s, int number , float cgpa){
        name = s;
        rollnumber = number;
        gpa = cgpa;
    }
};

int main()
{
    student s1("alpha" , 1 , 9.0);
    cout << s1.name << " " << s1.rollnumber << " " << s1.gpa;

    return 0 ;
}