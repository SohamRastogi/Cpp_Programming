#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows/coumns : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // now swap row-wise.
    return 0 ;
}