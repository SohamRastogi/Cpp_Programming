#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,0,0,1,0,1,0};
    int n=8;
    int countzero = 0;
    int countone = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) countzero++;
        else if(arr[i]==1) countone++;
    }
    for(int i=0;i<countzero;i++){
        cout<<"0"<<" ";
    }
    for(int i=0;i<countone;i++){
        cout<<"1"<<" ";
    }
    return 0 ;
}