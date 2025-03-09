#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];  // if sorted array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    int target;
    cout<<"Enter the target number : ";
    cin>>target;
    cout<<endl<<endl;
    bool flag = false;
    int i=0;
    int j =n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            flag = true;
            break;
        }
        else if(arr[i]+arr[j]>target) j--;
        else i++;
    }
    if(flag == true) cout<<"Yes";
    else if(flag == false) cout<<"No";
    return 0 ;
}