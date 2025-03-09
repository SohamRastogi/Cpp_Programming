#include<iostream>
using namespace std;

void Sort(int arr[],int start,int mid,int end){
    int n1 = mid-start+1;
    int n2 = end - mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[start+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[j+mid+1];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            arr[k]=b[j];k++;j++;
        }
        else {arr[k]=a[i];k++;i++;}
    }
    while(i<n1){
        arr[k]=a[i];k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];k++;j++;
    }
    return ;
}

void mergeSort(int arr[],int start,int end){
    if(start>=end) return ;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    Sort (arr,start,mid,end);
}

int main()
{
    int arr[]={9,2,6,4,7,3,8,1};
    int n=8;
    mergeSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}