#include<bits/stdc++.h>
using namespace std;

class parent{

    public :
    parent(){
        cout << "parent class" << endl;
    }
};

class child : public parent{

    public :
    child(){
        cout << "child class" << endl;
    }
};

class grandchild : public child{

    public:
    grandchild(){
        cout << "grandchild class " << endl;
    }
};

int main()
{
    grandchild g;

    return 0 ;
}