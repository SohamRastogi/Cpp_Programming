#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,9,10};
    int brr[]={2,3,11,20};
    int frr[8];
    int i=0;
    int j=0;
    int k=0;
    int n1=4;
    int n2=4;
    while(i<n1 && j<n2){
        if(arr[i]>brr[j]){
            frr[k]=brr[j];
            k++;
            j++;
        }
        else{
            frr[k]=arr[i];
            i++;
            k++;
        }
    }
    while(i<n1){
        frr[k]=arr[i];
        i++;
        k++;
    }
    while(j<n2){
        frr[k]=brr[j];
        j++;
        k++;
    }
    for(int i=0;i<8;i++){
        cout<<frr[i]<<" ";
    }
    return 0;
}