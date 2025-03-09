#include<iostream>
using namespace std ;
int main()
{
    int arr[]={5,4,3,2,1};
    int minindex = -1;
    for(int i=0;i<4;i++){
        int min = 1000;
        for(int j=i;j<5;j++){
            if(min>arr[j]){
                min = arr[j];
                minindex = j;
            }
        }
         int temp;
         temp = arr[i];
         arr[i]=arr[minindex];
         arr[minindex]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}