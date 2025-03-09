#include<iostream>
using namespace std;
int main()
{
    int arr[2]={1,100};
    int* ptr = &arr[0];
    cout<<ptr<<" "<<*ptr;
    cout<<endl;
    ptr=ptr+1;
    cout<<ptr<<" "<<*ptr;
    return 0 ;
}
// *ptr++ => first operate on ptr++ and then dereference *ptr. (be mindful of the post increment factor)!