#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,2,3,2,1};
    int farr[6]={0,0,0,0,0,0};
    for(int i=0;i<5;i++){
        farr[arr[i]]++;
    }
    for(int i=1;i<6;i++){
        farr[i]=farr[i-1]+farr[i];
    }
    // for(int i=0;i<6;i++){
    //     cout<<farr[i]<<" ";
    // }
    int i = 4;
    int ansarr[5]={0,0,0,0,0};
    while(i>=0){
        farr[arr[i]]=farr[arr[i]]-1;
        int v = farr[arr[i]];
        ansarr[v]=arr[i];
        i--;
    }
    for(int i=0;i<5;i++){
        cout<<ansarr[i]<<" ";
    }
    return 0;

}