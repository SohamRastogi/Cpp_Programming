#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a = i;
        for(int j=1;j<=n-i+1;j++){
           cout<<a<<" ";
           a++;
        }
        int b = 1;
        for(int k =1;k<=i-1;k++){
            cout<<b<<" ";
            b++;
        }
        cout<<endl ;
    }
    return 0 ;
}