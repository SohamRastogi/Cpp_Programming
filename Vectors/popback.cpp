#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // v.pop_back();
    v.erase(v.end()-1);
    for(int i=0;i<5;i++){     // why not work ? :(    =>  use loop for(i=0;i<4;i++) to get the ans ! :)
        cout<<v[i]<<endl;
    }
    return 0 ;
}