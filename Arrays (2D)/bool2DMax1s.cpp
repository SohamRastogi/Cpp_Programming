#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows : ";  // 3
    cin>>r;
    cout<<"Enter number of columns : ";  // 4
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;      
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
    // bool array :
    /*  0 1 1 1
        0 0 0 1
        0 0 0 1 */
        int maxcount = -1;
        int rownumberindex = -1;
        for(int i=0;i<r;i++){
            int count = 0;
            // int rownumberindex = 0;
            for(int j=0;j<c;j++){
              if(arr[i][j]==1) count++;
              if(maxcount<count) {
                maxcount = count;
                rownumberindex = i;
              }
            }
        }
        cout<<"Maximum number of 1s occur in row number (index) : "<<rownumberindex;
    return 0 ;
}