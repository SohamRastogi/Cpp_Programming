#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5]={0,0,0,0,0};
    int n=5;
    cout<<"original array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl;
   for(int i=0;i<5;i++){
      for(int j=0;j<=i;j++){
         brr[i]=brr[i]+arr[j];     
      }
   }
   for(int i=0;i<5;i++){
    cout<<brr[i]<<" ";
   }
    return 0 ;
}