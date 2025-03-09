#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    float gpa;
 
     Student(string n , int r , float g)
     {
         name = n;
         roll = r;
         gpa = g;
     }

     Student(int r , string n , float g)
     {
         roll = r;
         name = n;
         gpa = g;
     }

};
int main()
{
    Student s1("soham" , 1 , 9.2);
    Student s2(2 , "rahul" , 9.1);

    cout << s1.name << " " << s1.roll << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.roll << " " << s2.gpa << endl;

    return 0;
}