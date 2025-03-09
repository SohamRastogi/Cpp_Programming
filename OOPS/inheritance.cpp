#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    Parent()
    {
        cout << "Parent Class" << endl;
    }
};

class child1 : public Parent{
    public :
    child1()
    {
        cout << "child1 class" << endl;
    }
};

int main()
{
    child1 c;

    return 0 ;

}