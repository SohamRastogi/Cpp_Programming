// nice technique !!

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter number of rows in array 1 : ";
    cin>>a;
    cout<<"Enter number of columns in array 1 : ";
    cin>>b;
    cout<<"Enter number of columns in array 2 : ";
    cin>>c;
    int arr[a][b];
    int brr[b][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
    }
    // cout<<endl<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    // cout<<endl;
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //      cout<<endl;
    // }
    // cout<<endl<<endl;
    // for(int i=0;i<b;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<arr2[i][j];
    //     }
    //     cout<<endl;
    // }
    int crr[a][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            int value = 0;
            for(int k=0;k<b;k++){
                value = value+ arr[i][k]*brr[k][j];
            }
            crr[i][j]=value;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
        cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}