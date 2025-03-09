#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> v , int target , int lo , int hi)
{
    if(lo>hi) return -1;
    if(lo <= hi){
    int mid = (lo + hi)/2;
    if(v[mid] == target) return mid;
    else if(v[mid] > target) return binary_search(v , target , lo , mid-1);
    else return binary_search(v , target , mid+1 , hi);
    }



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

    cout << binary_search(v , target , 0 , v.size()-1);

    return 0 ;
}