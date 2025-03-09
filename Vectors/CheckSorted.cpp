#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);
    v.push_back(4);
    bool flag = false;
    for(int i=0;i<4;i++){
         if(v[i]>v[i+1]){
            flag = true;
            break;
         }
    }
    if(flag == true) cout<<"Unsorted vector";
    else if(flag == false) cout<<"Sorted vector";
    return 0 ;
}