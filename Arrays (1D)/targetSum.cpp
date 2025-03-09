#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int target = 10;
    int count = 0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==target) count++;
        }
    }
    cout<<count<<endl;
    return 0 ;
}