#include<iostream>
using namespace std;

void countsort(int arr[],int n,int pos){
    int farr[10]={0};
    for(int i=0;i<6;i++){
        farr[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++){
        farr[i]=farr[i-1]+farr[i];
    }
    int ansarr[6];
    int i=5;
    while(i>=0){
        int v = --farr[(arr[i]/pos)%10];
        ansarr[v]=arr[i];
        i--;
    }
    for(int i=0;i<6;i++){
        arr[i]=ansarr[i];
    }
    return;
}

int main()
{
    int arr[]={170,045,075,90,802,002};
    int max = 802;
    for(int pos = 1;max/pos>0;pos=pos*10){
        countsort(arr,6,pos);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}