#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j = start;j<end;j++){
        if(arr[j]<pivot){
            i++;
            int temp;
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp;
    temp = arr[i+1];
    arr[i+1] = arr[end];
    arr[end]=temp;
    return i+1;
}

void quicksort(int arr[],int start,int end){
    if(start>=end) return ;
    int pi = partition(arr,start,end);
    quicksort(arr,start,pi-1);
    quicksort(arr,pi+1,end);
}

int main()
{
    int arr[]={18,12,30,16,35,20};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}