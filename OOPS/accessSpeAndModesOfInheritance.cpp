#include<bits/stdc++.h>
using namespace std;

class Parent{
    public :
    int x;
    protected :
    int y;
    private :
    int z;
};

class child1 : public Parent{  // inheritance

    // x will be public and accessible here
    // y will be protected and accessible here
    // z will be inaccessible
};

class child2 : protected Parent{  // inheritance

    // x will be protected and accessible here
    // y will be protected abd accessible here
    // z will be inaccessible
};

class child3 : private Parent{  // inheritance

    // x will be private and accessible here
    // y will be private and accessible here
    // x will be inaccessible
};

int main()
{
    Parent p;
    // p.x is accessible
    // p.y is inaccessible as not in inheritance
    // p.z is inaccessible as private

    return 0 ;
}