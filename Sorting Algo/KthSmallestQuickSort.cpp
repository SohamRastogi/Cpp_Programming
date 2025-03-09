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

int kthsmallest(int arr[],int start,int end,int k){
    int position = partition(arr,start,end);  // position of pivot element
    if(position-start==k-1){
        return arr[position];
    }
    else if (position-start>k-1){
        return kthsmallest(arr,start,position-1,k);
    }
    else if(position-start<k-1){
        return kthsmallest(arr,position+1,end,k-position+start-1);
    }
}

int main()
{
    int arr[]={3,5,2,1,4,7,8,6};
    int n = 8;
    int k = 5;
    cout<<kthsmallest(arr,0,7,k)<<" ";
    return 0;
}