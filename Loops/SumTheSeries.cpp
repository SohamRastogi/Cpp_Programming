#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2==0) sum = sum-i;
        else sum = sum+i;
    }
    cout<<"The sum of the sequence is : "<<sum;
    return 0 ;
}