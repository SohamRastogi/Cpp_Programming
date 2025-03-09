#include<iostream>
#include<limits.h>
using namespace std ;
int main()
{
    int n = INT_MAX;           // for(int i=1;;i++) also correct method !!
    for(int i=1;i<=n;i++){
           if(i%5==0 && i%7==0){
            cout<<i;
            break;
           }
    }
    return 0 ;
}
    
    