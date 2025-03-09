#include<bits/stdc++.h>
using namespace std;

class Loading{
    public :

    void sum(int x,int y)
    {
        cout << x+y << endl; 
    }
    void sum(int x , int y , int z)
    {
        cout << x + y + z << endl;
    }
    void sum(string s, string d)
    {
        cout << s+d << endl;
    }
    int sum(int x)
    {
        return x;
    }

    string sum(string s1)
    {
        return s1 ;
    }
    // float sum(float x, float y)  => invalid
    // {
    //     return x+y;
    // }
};

int main()
{
    Loading l;
    l.sum("soham" , "rastogi");
    l.sum(2,3);
    l.sum(1,2,3);
    cout << l.sum(100) << endl;
    // cout << l.sum(1.1 , 2.8) << endl;
    cout << l.sum("soham");


    return 0 ;

}

// int main()
// {
//     string s1 = "soham";
//     string s2 = "rastogi";

//     // cout << s1 << " " << s2;
//     cout << s1 + s2;

//     return 0 ;
// }