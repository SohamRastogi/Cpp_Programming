#include<iostream>
using namespace std ;
int main()
{
    char vowel[5];
    for(char element : vowel){
        cin>>element;
    }
    for(char element : vowel){
        cout<<element;
    }
    return 0 ;
}

