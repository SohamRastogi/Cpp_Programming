#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of m : ";
    cin>>m;
    int arr[n];
    int brr[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<m;j++){
        cin>>brr[j];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    for(int j=0;j<m;j++){
        cout<<brr[j]<<" ";
    }
    return 0 ;
}
// time complexity => O(n+m)
// space complexity => O(1)