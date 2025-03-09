#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int* x = &a;
    int* y = &b;
    // int* result = *x + *y;
    // cout<<*result;
    int result;
    int* alpha = &result;
    result = *x+*y;
    cout<<*alpha;
    return 0 ;
}