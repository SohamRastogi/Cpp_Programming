#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int alpha = 2*n-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            char ch =(char)k+64;
            cout<<ch;
        }
        cout<<endl;
    }
    int m = n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        // int alpha = 2*n-3;
        for(int k=1;k<=alpha;k++){
            char ch = (char)k+64;
            cout<<ch;
            // alpha = alpha-2;
        }
        alpha = alpha-2;
        cout<<endl;
    }
    return 0 ;
}