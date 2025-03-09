#include<iostream>
using namespace std ;
int main()
{
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int n;
    n=k%5;      // we have to rotate the array be n steps ;
    int arr[5]={1,2,3,4,5};
    cout<<"Original array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    int brr[5]={1,2,3,4,5};
    int crr[5]={0,0,0,0,0};
    cout<<"Rotated array : "<<endl;;
    for(int i=0;i<5;i++){
        crr[(i+n)%5]=brr[i];
       
    }
    for(int i=0;i<5;i++){
        cout<<crr[i]<<" ";
    }
    return 0 ;

}