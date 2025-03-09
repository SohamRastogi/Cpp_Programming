#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a =0;
    int b= 1;
    int sum = -1;
    for(int i=2;i<=n;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    cout<<"the nth fibonacci number is : "<<sum;
    return 0;
}
// space complexity is O(1), as we have maintained only 3 variables (constant space independent of n).
// variable 1 : nth fibo number.
// variable 2 : previous fibo number.
// variable 3 : second last fibo number.