#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,6,7,8};
    int brr[100000]={0};
    for(int i=0;i<6;i++){
        brr[arr[i]]=1;
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;cout<<endl;
    if(brr[target]==1) cout<<"Number is present !!";
    else cout<<"Number is not present !";
    return 0 ;
}