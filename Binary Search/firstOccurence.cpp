#include <bits/stdc++.h>
using namespace std;

int first_occurence (vector <int> v , int target)
{
    int lo = 0;
    int hi = v.size()-1;
    

    int ans = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi)/2;
        if(v[mid] == target){
            ans = mid;
            hi = mid-1;
        }
        else if (v[mid] > target){
            hi = mid-1;
        }
        else lo = mid+1;
    }

    return ans;
    
}

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    int target ;
    cin >> target ;

    cout << first_occurence(v , target);

    return 0 ;
}