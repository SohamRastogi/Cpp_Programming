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
    cout << "enter the length of the subarray : " ;
    cin >> m;

    int sum = 0;
    int max = INT_MIN;

    for(int i = 0 ; i < n-m+1 ; i ++)
    {
        sum = 0;
        
        for(int j = i ; j < i+m ; j ++)
        {
            sum = sum + arr[j];
        }
        if(sum > max)
        {
            max = sum;
        }
    }

    cout << "the maximum sum of the subarray is : " << max;

    return 0;
}