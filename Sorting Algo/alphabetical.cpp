#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string arr[]={"papaya","lime","watermelon","apple","mango","kiwi"};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // how to use strcmp ??
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         if(strcmp(arr[j],arr[j+1]  => this shows error.
    //  ))}}
    return 0 ;
}