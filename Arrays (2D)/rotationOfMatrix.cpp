#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows/columns : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int brr[n][n];      // extra space (transpose of arr[n][n]).
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            brr[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int crr[n][n];      // in a row elements reverse.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            crr[i][j]=brr[i][2-j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0 ;
}