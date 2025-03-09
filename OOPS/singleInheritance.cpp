#include<bits/stdc++.h>
using namespace std;


class parent{

public :
    parent(){
        cout << "parent class" << endl;
    }
};

class child1 : public parent{

public :
    child1(){
        cout << "child class" << endl;
    }
};


int main()
{
    child1 c;

    return 0 ;
}