#include<iostream>
using namespace std ;
void welcome()
{
    cout<<"hello"<<endl;
    return ;
}
int main()
{
    welcome();
    cout<<endl;
    cout<<"good bye "<<"\n";
    for(int i=1;i<=5;i++){
        welcome();
    }
    return 0 ;
}