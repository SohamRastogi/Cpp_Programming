#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int answer = sum(n/10)+(n%10);
    return answer;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // logic =>
    // int sum = 0;
    // while(n!=0){
    //     sum += n%10;
    //     n=n/10;
    // }
    // cout<<sum;
    int sum_digits = sum(n);
    cout<<sum_digits;
    return 0;
}