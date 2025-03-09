#include<iostream>
using namespace std ;
int main()
{
    int l,b;
    cout<<"Enter the value of length : ";
    cin>>l;
    cout<<"Enter the value of breadth : ";
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            if((i+j)%2 == 0) cout<<"1 ";
            else cout<<"2 ";
        }
        cout<<endl;
    }
    return 0 ;
}