#include <bits/stdc++.h>
using namespace std;

int peakElement (vector <int> v)
{
    int lo = 0;
    int hi = v.size()-1;

    while(lo <= hi)
    {
        int mid = (lo+hi) / 2;
        if(mid == 0){
            if(v[mid] > v[mid + 1]) return 0;
            else if (v[mid] < v[mid+1]) return 1;
        }
        if(mid == v.size()-1){
            if(v[mid] > v[mid-1]) return mid;
            else return mid-1;
        }
        if(v[mid] > v[mid-1] && v[mid] > v[mid+1]){
            return mid;
        }
        else if(v[mid] > v[mid-1]){
            lo = mid+1;
        }
        else hi = mid-1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i ++){
        cin >> v[i];
    }

    cout << peakElement(v);

    return 0 ;
}