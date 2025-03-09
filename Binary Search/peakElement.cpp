#include<bits/stdc++.h>
using namespace std;

int peakInMountainArray (vector <int> v){
    int lo = 0;
    int hi = v.size()-1;
    int ans = -1;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(v[mid] > v[mid-1]) {
            ans = max(ans,mid);
            lo = mid+1;
        }
        else 
        {
            hi = mid -1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ;  i++){
        cin >> v[i];
    }

    cout << peakInMountainArray(v);

    return 0 ;
}