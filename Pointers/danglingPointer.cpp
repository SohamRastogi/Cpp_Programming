#include<iostream>
using namespace std;
int main()
{
    int* ptr = NULL;
    {
        int x = 10;
        ptr = &x;
    }
    cout<<ptr<<endl;;
    cout<<*ptr;    // should be a random value ?? 
    return 0 ;
}