#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<endl;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<endl;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<endl;
    cout<<"Size : "<<v.size()<<endl;     // size = 3;
    cout<<"capacity : "<<v.capacity()<<endl; // capacity = 4;
    v.pop_back();
    v.pop_back();
    cout<<endl;
    cout<<"Size : "<<v.size()<<endl;      // size = 1;
    cout<<"capacity : "<<v.capacity()<<endl; // capacity = 4;
    
    


}