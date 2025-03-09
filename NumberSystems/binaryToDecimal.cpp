// check what is wrong !
#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;
    int count = 0;
    while(n!= 0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    int value = 0;
    for(int i=0;i<count;i++){
         int ld = n%10;
         value = value + (ld*(2^i)) ;
         n=n/10;       
    }
    
    cout<<value<<endl;
   
    return 0 ;
}