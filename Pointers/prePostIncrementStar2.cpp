#include<iostream>
using namespace std;
int main()
{
    int arr[2]={5,4};
    int* ptr = &arr[0];
    cout<<*ptr++;
    cout<<endl;
    cout<<*ptr;
    return 0 ;
}