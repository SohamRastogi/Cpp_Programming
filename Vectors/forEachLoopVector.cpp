#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<5;i++){
        int element;
        cout<<"Enter a number : ";
        cin>>element;
        v.push_back(element);
    }
    for(int ele:v){
        cout<<ele<<endl;
    }
    return 0 ;
}