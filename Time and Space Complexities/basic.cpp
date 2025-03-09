#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){   // space complexity => O(1) as no extra space needed.
        cout<<arr[i];       // time complexity => O(n) for traversing the array and printing corresponding elements.
    }
    return 0 ;
}