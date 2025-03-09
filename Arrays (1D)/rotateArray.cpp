#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "enter number of elements in the array : " ;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }
    
    int dummy[n];

    for(int i = 0 ; i < n ; i ++)
    {
        dummy[i] = arr[i] ;
    }

    for(int i = 0 ; i < n ; i ++)
    {
        if((i - 2) % n < 0)
        {
            arr[i] = dummy[n + i - 2];
        }
        else if ((i-2) % n >= 0)
        {
            arr[i] = dummy[i -2];
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        cout << arr[i] << " " ; 
         
    }

    return 0 ;
}