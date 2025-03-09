#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = INT_MIN ;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"The maximum value is : "<<max<<endl;
    return 0;
}