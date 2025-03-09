#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number of elements in the array : ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i  < n ; i ++)
    {
        cin >> arr[i];
    }

    int dummy[n];
    for(int i = 0 ; i  < n; i ++)
    {
        dummy[i] = arr[i] ;
    }

    for(int i = 0 ; i < n ; i ++)
    {
        arr[(i+2) % n] = dummy[i];
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " " ;
    }
    return 0 ;
}