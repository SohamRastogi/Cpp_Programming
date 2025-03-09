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
    v.push_back(5);
    v.erase(v.end()-2);
    for(int i=0;i<4;i++){
        cout<<v[i]<<endl;
    }
    return 0 ;
}