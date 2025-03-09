#include<iostream>
using namespace std ;
int factorial(int n){
    int x = 1;
    for(int i=1;i<=n;i++){
        x=x*i;
    }
    return x ;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int fact = factorial(i);
        cout<<fact<<endl;
    }
    return 0 ;
}