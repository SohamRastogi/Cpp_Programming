#include<iostream>
using namespace std;
void swap(int* a,int* b){
     int temp;
     temp=*a;
     *a = *b;
     *b = temp;
     return ;
}
int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    swap(&a,&b);
    cout<<endl;
    cout<<"First number : "<<a<<endl;
    cout<<"Second number : "<<b;
    return 0 ;
}