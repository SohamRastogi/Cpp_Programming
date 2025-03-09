#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    int x=1;
    int count = 0;
    for(int i=0;i<5;i++){
        if(v[i]==x) count++;
    }
    cout<<count;
    return 0 ;
}