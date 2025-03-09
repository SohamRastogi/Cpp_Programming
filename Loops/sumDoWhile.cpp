#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sum = 0;
    int i = 0;
    do{
        sum = sum+i;
        i++;
    }while(i<=n);
    cout<<"the value of the sum is : "<<sum;
    return 0 ;
}