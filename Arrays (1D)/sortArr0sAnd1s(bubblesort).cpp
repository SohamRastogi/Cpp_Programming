#include<iostream>
using namespace std;
int main()
{
    int n = 8;
    int arr[]={1,1,0,0,1,0,1,0};  // output array should be {0,0,0,0,1,1,1,1,}.

    // bubble sort algorithm (unoptimized). can be optimized via following bubble sort optimization.
    
    int n = 8;
    for(int i=1;i<8;i++){
        for(int j=0;j<7;j++){
            if(arr[j] > arr[j+1]) {
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}