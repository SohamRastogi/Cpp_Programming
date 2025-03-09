#include<iostream>
using namespace std;
void fun( int arr[]);
int main()
{
    int arr[5]={1,2,3,4,5};
    fun(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
void fun (int arr[]){
    arr[0]=1000;
    return ;
}