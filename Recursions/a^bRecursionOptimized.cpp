#include<iostream>
using namespace std;
int powerlog(int a, int b){
    if(b==0) return 1;
    int x= powerlog(a,b/2);
    if(b%2 == 0) return x*x;
    else return x*x*a;
}
int main()
{
    int a,b;
    // printf("enter the base : ");
    // scanf("%d",&a);
    // printf("enter the exponent : ");
    // scanf("%d",&b);
    
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    powerlog(a,b);
    // printf("%d",powerlog(a,b));
    cout<<powerlog(a,b);
    return 0 ;
}