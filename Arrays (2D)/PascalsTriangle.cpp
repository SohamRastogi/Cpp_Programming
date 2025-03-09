#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int combination(int i,int k){
    int comb = factorial(i)/(factorial(k)*factorial(i-k));
    return comb;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<combination(i,k)<<" ";
        } 
        cout<<endl;
    }
    return 0;
}