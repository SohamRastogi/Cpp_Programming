#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    int finalanswer = fibo(n-1)+fibo(n-2);
    return finalanswer;
    // int ans1 = fibo(n-1);
    // int ans2 = fibo(n-2);
    // return ans1+ans2;
    
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int number = fibo(n);
    cout<<"the number is : "<<number ;
    return 0 ;
}