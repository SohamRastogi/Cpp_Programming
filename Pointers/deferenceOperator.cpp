#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int* ptr = &n;
    *ptr = 20;
    cout<<n;
    return 0 ;
}