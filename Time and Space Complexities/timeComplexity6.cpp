#include<iostream>
using namespace std;
int main()
{
    int n;
    int value=0;
    for(int i=1;i<=n;i*=2){
        for(int j=1;j<=i;j++){
            value++;
        }
    }
    return 0 ;
}
// time complexity => O(n) (worst case).
// space complexity => O(1) (as no extra space used).