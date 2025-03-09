#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int* x = &n;
    cout<<n<<endl<<x<<endl<<&n;
    return 0;
}