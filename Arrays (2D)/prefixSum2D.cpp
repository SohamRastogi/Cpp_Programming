#include<iostream>
using namespace std;
int main()
{
    // 1 dimensional array prefix sum pattern : 

    // int arr[5]={1,2,3,4,5};
    // int brr[5]={0,0,0,0,0};
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<=i;j++){
    //         brr[i]=brr[i]+arr[j];
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     cout<<brr[i]<<" ";
    // }
    // return 0;

    // 2 dimensional array prefix sum pattern : 

    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    int arr[r][c];
    int l1 = 1;
    int l2 = 2;
    int r1 = 1;
    int r2 = 2;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<endl;
    cout<<endl;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=r1;i<=r2;i++){
        sum1 = sum1 + arr[l1][i];
    }
    for(int i=r1;i<=r2;i++){
        sum2 = sum2 + arr[l2][i];
    }
    cout<<"the required sum is : "<<sum1+sum2;
    return 0 ;
}