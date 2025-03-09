#include<iostream>
using namespace std;
int main()
{
    int value =0;
    int n;
    for(int i=1;i<=n;i += i){
        value++;
    }
    return 0;

}
// time complexity => O(log n) (in worst case).
// space complexity => O(1) (as no extra space used).