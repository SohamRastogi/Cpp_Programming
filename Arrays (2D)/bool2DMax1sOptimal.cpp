#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];      // boolean sorted array.
        }
    }
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int rownumberindex = -1;
    int minimumnumber = INT_MAX;
    for(int i=0;i<r;i++){
        int number =0;
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                number = j;
                break;
            }
            // else if(number < minimumnumber) {
            //    minimumnumber = number;
            //    rownumberindex = i;
            } 
               if(number < minimumnumber) {
               minimumnumber = number;
               rownumberindex = i;
        }
    }
    cout<<"The row (index) with maximum number of 1s is : "<<rownumberindex;
    return 0 ;
}