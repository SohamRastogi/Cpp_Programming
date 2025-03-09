#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,3,5};
    for(int i=0;i<4;i++){
        int flag = 0;   // optimized 
        for(int j=0;j<4;j++){
            // bubble sort 
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
// time complexity => O(n^2)
// space complexity => O(1)
// max swaps = n(n-1)/2
// stable sort 