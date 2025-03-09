#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<5;i++){       // input loop M1.
        int element;
        cout<<"Enter number : ";
        cin>>element;
        v.push_back(element);
    }
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<endl;
        idx++;
    }
    return  0 ;

}