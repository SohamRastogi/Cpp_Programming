#include<iostream>
using namespace std;
int main()
{
    int* ptr = NULL;
    cout<<ptr;
    cout<<" ";
    // cout<<*ptr;   => this gives segmentation fault.
    return 0 ;
}