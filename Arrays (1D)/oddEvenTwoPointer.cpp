#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int i=0;
    int j=n-1;  // j=4 for(int i=0,j=4;i<j;i++,j--){

    while(i<j){
        if(arr[i]%2!=0 && arr[j]%2==0){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else if(arr[i]==0){
            i++;
        }
        else if(arr[j]%2!=0){
            j--;
        }

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0 ;
}