#include<bits/stdc++.h>
using namespace std;

class fruit{
    public :
    string name;
    string colour;
};

int main()
{
    fruit apple;
    apple.name = "apple";
    apple.colour = "red";

    fruit* x = new fruit();
    x -> name = "mango";
    x -> colour = "yellow";

    cout << apple.name << " " << apple.colour << endl;
    cout << x -> name << " " << x -> colour << endl;

    return 0 ;
}