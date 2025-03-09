#include<bits/stdc++.h>
using namespace std;

class ABC{
    int n;  // private

    public :

    void set(int x){
        n = x;
    }
    int get(){
        return n;
    }
};

int main()
{
    ABC obj1;
    obj1.set(10);
    cout << obj1.get() << endl;

    return 0 ;
}