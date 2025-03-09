#include<iostream>
using namespace std;
void swap(int arr[]){
    int temp;
    temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return ;
}
int main()
{
    int arr[2]={1,2};
    swap(arr);                           // automatically passed by reference.
    cout<<"the first element is : "<<arr[0];
    cout<<endl;
    cout<<"the second element is : "<<arr[1];
    return 0 ;
}