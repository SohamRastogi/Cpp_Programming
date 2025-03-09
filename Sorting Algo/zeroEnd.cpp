#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,3,0,0,42};
    int count = 0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            count++;
        }
    }
    // count = 3;
    int idx=-1;
    for(int i=0;i<count ;i++){
        for(int j=i;j<5;j++){
            if(arr[j]!=0){
               idx = j;
               break;
            }
        }
        int temp;
        temp= arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}