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
    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<endl;
    // }
    int x=1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            cout<<i<<endl;
            break;
        }
    }
    return 0 ;
}