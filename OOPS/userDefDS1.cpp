#include<bits/stdc++.h>
using namespace std;

class Vector{
    public :

    int size;
    int capacity;
    int* arr;

    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int n){
        if(size == capacity)
        {
            capacity = capacity * 2;
            int* arr2 = new int[capacity];
            for(int i = 0 ; i < size ; i ++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = n;
        size++;

    }

    void print()
    {
        for(int i = 0 ; i < size ; i ++)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }

    int get(int index)
    {
        if(index < 0) {
            cout << "invalid input" ;
            return -1;
        }
        if(index >= size) {
            cout << "Invalid input" ;
            return -1;
        }
        if(size == 0)
        {
            cout << "empty array";
            return -1;
        }
        return arr[index];
    }

    void remove()
    {
        if(size == 0)
        {
            cout << "empty array ";
            return ;
        }
        size--;
    }

    
};

int main()
{
    Vector v1;

    v1.add(10);
    v1.add(20);
    v1.add(5);
    v1.add(2);
    v1.add(6);
    v1.add(8);
    

    // v1.print() ;
    // int alpha = v1.get(4);
    // cout << alpha;
    
    v1.remove();
    v1.print();

    cout << v1.size << " " << v1.capacity << endl;

    return 0 ;

}