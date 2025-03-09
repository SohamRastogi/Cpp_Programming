#include <bits/stdc++.h>
using namespace std;

void printMatrix(int matrix[][10] , int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    
    int n;
    cin >> n;
    int m; 
    cin >> m;
    int matrix[n][10];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ;j < m ; j++){
            cin >> matrix[i][j];
        }
    }

    
    printMatrix(matrix , n, m);

    return 0;
}