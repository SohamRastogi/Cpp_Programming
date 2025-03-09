#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    // brute force method.
    int target = 2;
    bool flag = false;
    for(int i=0;i<5;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]-arr[j]==target || arr[j]-arr[i]==target){
                flag = true;
                break;
           }
       }
    }
    if(flag == true) cout<<"Yes";
    else if(flag == false) cout<<"No";
    return 0 ;
}