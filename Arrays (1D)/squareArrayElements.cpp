#include<iostream>
using namespace std;
int main()
{
    // for posotive elements.
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout<<"original array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]*arr[i]<<" ";
    }
    return 0 ;
}
// if negative numbers and 0 also included then calculate brr[i]=arr[i]*arr[i] and then use bubble sort algorithm to sort brr[].
