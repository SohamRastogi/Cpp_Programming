#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    
    int arr[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "enter the length of the subarray : ";
    cin >> m;

    int max = INT_MIN;
    int sum = 0;

    for(int i = 0 ; i < m ; i ++)
    {
        sum = sum + arr[i];
    }

    if(sum > max) max = sum;

    for(int i = 1 ; i <= n - m ; i ++)
    {
        sum = sum - arr[i-1] + arr[i+m-1];
        if(sum > max)
        {
            max = sum;
        }
    }

    cout << "the maximum sum subarray is : " << max;

    return 0 ;
}