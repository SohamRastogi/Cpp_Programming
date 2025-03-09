#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter the value of number 1 : "<<endl;
    cin>>a;
    cout<<"Enter the value of number 2 : "<<endl;
    cin>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of number 1 is : "<<a<<endl;
    cout<<"Value of number 2 is : "<<b<<endl;
    return 0;
}
    