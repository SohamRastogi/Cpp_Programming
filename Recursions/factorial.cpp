#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0) return 1 ;
    int finalanswer = factorial(n-1)*n ;
    return finalanswer ;
}
int main()
{
    int n;
    cout<<"Enter a number : " ;
    cin>>n;
    int ans = factorial(n) ;
    cout<<"the value of "<<n<<" factorial is : "<<ans<<endl ;
    return 0 ;
}