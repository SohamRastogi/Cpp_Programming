#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //cout<<endl;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<"sum is : "<<sum;
    return 0 ;
}