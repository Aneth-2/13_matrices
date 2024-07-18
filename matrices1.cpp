#include <iostream>
using namespace std;
int main() {
	
    int suma = 0,n;
    cout << "Ingrese el orden de la matriz cuadrada: ";
    cin >> n;
    
    int matriz[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el valor para [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                suma = suma + matriz[i][j];
            }
        }
    }
    
    system("cls"); 
    
    cout << "Suma de la parte triangular superior " << endl;
    cout << "La suma es: " << suma << endl;
    
    system("pause");
    
    return 0;
}

