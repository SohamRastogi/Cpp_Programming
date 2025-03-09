#include<bits/stdc++.h>
using namespace std;

class sum{

    public :

    void add(int x,int y){
        int addition = x+y;
        cout << addition << endl;
    }

    void add(int x,int y,int z){
        int addition = x+y+z;
        cout << addition << endl;
        
    }

    void add(float x, float y){
        float add = x+y;
        cout << add << endl;
    }
};

int main()
{
    sum s;

    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.3),float(2.6));

    return 0 ;

}