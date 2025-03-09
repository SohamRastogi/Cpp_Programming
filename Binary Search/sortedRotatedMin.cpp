#include<bits/stdc++.h>
using namespace std;

int minSortedRotated(vector <int> v)
{
    if(v.size() == 1) return v[0];
    if(v[0] < v[v.size()-1]) return v[0];

    int lo = 0;
    int hi = v.size()-1;
    
    while(hi>=lo)
    {
        int mid = (hi+lo)/2;
        if(v[mid] > v[mid+1]) return mid+1;
        if(v[mid] < v[mid-1]) return mid;

        if(v[mid] > v[lo]){
            lo = mid+1;
        }
        else if (v[mid] < v[lo]){
            hi = mid-1;
        }
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

    cout << minSortedRotated(v);

    return 0 ;

}