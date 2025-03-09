#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the score : "<<endl;
    cin>>a;
    if(a>80) cout<<"well done";
    else if( a<=80 && a>= 50) cout<<"can improve";
    else cout<<"poor performance";
    return 0;
}