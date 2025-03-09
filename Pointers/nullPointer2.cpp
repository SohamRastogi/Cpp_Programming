#include<iostream>
using namespace std;
int main()
{
    int* ptr = NULL;
    int* p1 = 0;
    int* p2 = '\0';
    cout<<ptr<<endl<<p1<<endl<<p2;  // all have same addresses (0x0).
    return 0 ;
}