#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño de la matriz cuadrada (n x n): ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    cout << "Ingrese los elementos de la matriz cuadrada:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += matriz[i][n - 1 - i]; 
    }

    cout << "La suma de los elementos de la diagonal secundaria es: " << suma << endl;

    return 0;
}
