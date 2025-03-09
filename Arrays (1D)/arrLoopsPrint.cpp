#include<iostream>
using namespace std ;
int main()
{
    char vowel[5];
    for(char &element:vowel){   // use address !!
        cin>>element;
    }
    for(char element:vowel){
        cout<<element<<"\n";
    }
    return 0 ;
}