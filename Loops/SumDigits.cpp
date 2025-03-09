#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    while(n!=0){
        int ld;
        ld = n%10;
        sum = sum+ld;
        n=n/10;
    }
    cout<<"the sum of digits of the entered number is : "<<sum;
    return 0 ;
}