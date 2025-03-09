#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    int x ;
    cout<<"Enter the target : ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x) {flag = true;break;}
            // else flag == false;
        }
    }
    if(flag == true) cout<<"True";
    else if(flag == false) cout<<"No";
    return 0 ;
}