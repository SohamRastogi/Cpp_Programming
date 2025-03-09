#include<bits/stdc++.h>
using namespace std;


class Parent{
    public:
    
    virtual void print()
    {
        cout << "parent class" << endl;
    }
    void show()
    {
        cout << "parent class" << endl;
    }
};

class child :public Parent{

    public :
    
    void print(){
        cout << "child class" << endl;
    }
    void show(){
        cout << "child class" << endl;
    }
};


int main()
{

    Parent* p;
    child c;

    p = &c;

    p -> print();
    p -> show();

    return 0 ;
}