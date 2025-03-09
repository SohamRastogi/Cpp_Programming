#include<iostream>
using namespace std ;
int main()
{
    int score;
    cout<<"enter the score : ";
    cin>>score;
    cout<<endl;
    if(score>80){
        if(score>90) cout<<"Congrats";
        else cout<<"Well done";
    }
    else if(score<=80 && score>=40) cout<<"can improve ";
    else cout<<" Poor Performance";
    return 0 ;
}