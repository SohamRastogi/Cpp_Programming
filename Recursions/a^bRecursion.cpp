#include<iostream>
using namespace std;
int power (int a,int b){
    if(b==0) return 1;
    int finalanswer = power(a,b-1)*a;
    return finalanswer ;
}
int main()
{
    int a,b;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    int answer = power(a,b);
    cout<<answer;
    return 0 ;
}