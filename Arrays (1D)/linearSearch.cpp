#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];
    int target ;
    int flag = 0;
    int idx = -1;
    cout<<"Enter the target number : ";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag = 1;
            idx = i;
            break;
        }
    }
    if(flag == 1) cout<<idx;
    else cout<<"-1";

    return 0 ;
}