#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,1,3};
    // int count = 0;
    for(int i=0;i<5;i++){
        int count = 0;
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count == 0) {
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0 ;
}