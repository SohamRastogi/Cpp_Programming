#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter elements of the first array : "<<endl;
    cin>>n;
    cout<<"enter elements of the second array : "<<endl;
    cin>>m;
    int arr[n];
    int brr[m];
    int crr[n+m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    for(int i=0;i<m;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        crr[i]=arr[i];
    }
    for(int i=0;i<n;i++){
    cout<<crr[i]<<" ";
    }
    for(int i=0;i<m;i++){
        crr[i+n] = brr[i];
    }
    for(int i=0;i<m;i++){
    cout<<crr[n+i]<<" ";     // use bubble sort algorithm to sort crr in increasing order.
    }

    
    return 0 ;
}