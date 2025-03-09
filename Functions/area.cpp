#include<iostream>
using namespace std;
float area(float radius){
    return 3.14159265359*radius*radius;
}
int main()
{
    float radius;
    cout<<"enter the value of radius : ";
    cin>>radius;
    float ans = area(radius);
    cout<<"The area is : ";
    cout<<ans;
    return 0;
}