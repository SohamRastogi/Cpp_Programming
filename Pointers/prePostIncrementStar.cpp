#include<iostream>
using namespace std;
int main()
{
    int arr[2] = {5,4};
    int* ptr = &arr[0];
    cout<< (*ptr)++ << endl; // 5 print as post increment.
    cout<<arr[0]<<" "<< arr[1];   // now arr[0] = 6.
    return 0 ;
}