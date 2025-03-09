#include<iostream>
using namespace std ;

int add(int a ,int b);    // function prototype (now we can declare the add function below).

int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    int sum = add(a,b);
    cout<<"The sum of the two entered numbers is : "<<sum;
    return 0 ;
}
int add(int a,int b){
    int sumtwo = a+b;
    return sumtwo;
}