#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<5;i++){
        int element;
        cout<<"Enter element : ";
        cin>>element;
        v.push_back(element);
        // cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0 ;
}