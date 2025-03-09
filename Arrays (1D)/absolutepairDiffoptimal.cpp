#include<iostream>
using namespace std;
int absolute(int n);
int main()
{
    // optimal solution : TWO POINTER METHOD !!
    int arr[]={1,2,3,4,5};  // sorted array necessary.  
    int target = 2;
    int i=0;
    int j=4;
    bool flag = false;
    while(i<j){
        if(absolute(arr[i]-arr[j])==target){
            flag = true;
            break;
        }
        else if(absolute(arr[i]-arr[j])>target){
             j--;
        }
        else if(absolute(arr[i]-arr[j]<target)){
           i++;
        }
    }
    if(flag == true) cout<<"Yes";
    else if(flag == false) cout<<"No";
    return 0;
}
int absolute(int n){
    if(n>0) return n;
    else if(n<0) return -n;
    else if(n==0) return 0;
}