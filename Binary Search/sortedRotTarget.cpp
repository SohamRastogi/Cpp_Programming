#include<bits/stdc++.h>
using namespace std;

int sortedRotatedMin(vector <int> v)
{
    if(v.size() == 1){
        return v[0];
    }
    
    int hi = v.size()-1;
    int lo = 0;

    if(v[hi]>v[lo]) return v[0];

    while (hi >= lo)
    {
        int mid = (hi+lo)/2;
        if(v[mid] > v[mid+1]) return mid+1;
        if(v[mid] < v[mid-1]) return mid;

        if(v[mid] > v[lo]){
            lo = mid+1;
        }
        else if(v[mid] < v[lo]){
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

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    int target;
    cin >> target;

    int alpha = sortedRotatedMin(v);


    if(v[alpha] == target) {
        cout << alpha;
        return 0 ;
    }

    int lo = alpha+1;

    int hi = v.size()-1;

    while(hi >= lo){
        int mid = (lo+hi)/2;
        if(v[mid] == target){
            cout << mid;
            return 0 ;
        }
        else if(v[mid] > target){
            hi = mid-1;
        }
        else if(v[mid] < target){
            lo = mid+1;
        }
    }

        hi = alpha -1;
        lo = 0 ;
        while(hi>=lo){
        int mid = (lo+hi)/2;
        if(v[mid] == target){
            cout << mid;
            return 0 ;
        }
        else if (v[mid] > target){
            hi = mid-1;
        }
        else if (v[mid] < target){
            lo = mid+1;
        }
    }



    return 0 ;
}
