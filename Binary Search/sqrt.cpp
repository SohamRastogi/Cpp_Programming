#include <bits/stdc++.h>
using namespace std;

int square_root(int n)
{
    int hi = n;
    int lo = 1;

    int ans = -1;

    while(hi >= lo)
    {
        int mid = (hi+lo)/2;
        if(mid*mid <= n){
            ans = mid ;
            lo = mid+1;
        }
        else hi = mid-1;

    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << square_root(n);

    return 0 ;
}