#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> v , int target)
{
    int lo = 0;
    int hi = v.size()-1;

    while (lo <= hi)
    {
        int mid = (lo + hi)/2;

        if(v[mid] == target){
            return mid;
        }
        else if(v[mid] > target){
            hi = mid-1;
        }
        else if ( v[mid] < target){
            lo = mid + 1;
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

    int target ;
    cin >> target ;

    cout << binary_search(v , target);

    return 0 ;
}