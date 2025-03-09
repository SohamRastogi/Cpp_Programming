#include<iostream>
using namespace std;
bool isprime(int alpha);  // function prototype 
// bool isprime(int alpha){
//     for(int i=2;i<alpha;i++){
//         if(alpha%i!=0){
//             return true;
//         }
//         else return false;
//     }
// }
int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    int max = 0;
    int min = 0;
    if(a>b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    for(int i=min+1;i<max;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0 ;
}
bool isprime(int alpha){
    for(int i=2;i<alpha;i++){
        if(alpha%i!=0){
            return true;
        }
        else return false;
    }
}