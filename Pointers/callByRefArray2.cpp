#include<iostream>
using namespace std;
void pass(int arr[]){
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    pass(arr); // full array accessible to void pass function.
    return 0 ;
}