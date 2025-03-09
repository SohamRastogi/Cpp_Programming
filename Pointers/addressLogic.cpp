#include<iostream>
using namespace std;
int main()
{
    int x = 20;
    int* ptr = &x;
    cout<<ptr<<endl;
    // ptr=ptr+1; // ptr++;
    ptr++;
    cout<<ptr;
    return 0 ;
}