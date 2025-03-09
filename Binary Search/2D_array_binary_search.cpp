#include<bits/stdc++.h>
using namespace std;

int binary_search (int arr[][10] , int n , int m , int target)
{
    int lo = 0;
    int hi = n*m -1;

    while (lo <= hi)
    {
        int mid = (lo+hi)/2;
        int x = mid/m;
        int y = mid%m;

        if(arr[x][y] == target){
              return 1 ;
        }
        else if(arr[x][y] > target){
            hi = mid-1;
        }
        else if(arr[x][y] < target){
            lo = mid+1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int arr[n][10];

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> arr[i][j];
        }
    }

    int target ;
    cin >> target ;

    cout << binary_search(arr , n , m , target);

    return 0 ;
}