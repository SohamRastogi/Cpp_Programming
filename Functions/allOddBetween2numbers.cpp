#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    cout<<endl;
    cout<<"\n";
    int max = 0;
    int min = 0;
    if(a<b) {
        max = b;
        min = a;
    }
    else if (a>b){
        max = a;
        min = b;
    }
    else cout<<"Invalid input";
    if(min%2==0){
        int alpha = min+1;
        for(int i=alpha;i<max;i=i+2){
            cout<<i<<" ";
        }
    }
    if (min%2!=0){
        int beta = min+2;
        for(int j=beta;j<max;j=j+2){
            cout<<j<<" ";
        }
    }
   
    return 0 ;
}