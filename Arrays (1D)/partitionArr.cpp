#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,2};
    int n=5;
    // int prefixsum = 0;
    // int suffixsum = 0;
    bool flag = false;
    for(int alpha = 1;alpha<4;alpha++){
        int prefixsum = 0;
        int suffixsum = 0;
    for(int i=0;i<alpha;i++){
         prefixsum=prefixsum+arr[i];
    }
    for(int j=alpha;j<n;j++){
         suffixsum=suffixsum+arr[j];
    }
    if(prefixsum==suffixsum) {
        flag = true;
        break;
    }
}
  if(flag == true) cout<<"Array can be partitioned ";
  else if(flag == false ) cout<<"Array cant be partitioned ";
    return 0 ;
}