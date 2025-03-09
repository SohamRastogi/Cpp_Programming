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
    // input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>>arr[i][j];
        }
    }
    // output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int count = 0;
    int totalelements = r*c;
    int minr = 0;
    int maxr = c-1;
    int minc = 0;
    int maxc = r-1;
    while(count<totalelements){
        // print minimum row
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
            count++;
        }
        minr++;
        if(count>=totalelements) break;
        // print maximum column 
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc --;
         if(count>=totalelements) break;
        // print maximum row reverse 
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
            count++;
        }
        maxr--;
         if(count>=totalelements) break;
        // print minimum column 
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    return 0 ;
}