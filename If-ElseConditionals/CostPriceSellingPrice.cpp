#include<iostream>
using namespace std ;
int main()
{
    int cp,sp;
    cout<<"enter the cost price : "<<endl;
    cin>>cp;
    cout<<"enter the selling price : "<<endl;
    cin>>sp;
    int profit = sp-cp;
    int loss = cp-sp;
    if(cp>sp) cout<<"loss of : "<<loss;
    else if(sp>cp) cout<<"profit of : "<<profit;
    else cout<<"neither profit nor loss";
    return 0 ;
}