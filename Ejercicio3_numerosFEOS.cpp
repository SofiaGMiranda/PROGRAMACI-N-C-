// Ejercicio 02 - Encontrar el nro FEO en una posición.
//Número Feo: significa que son divisibles 2,3,5
//1,2,3,4,5,6,8,9,10,12,15,16....
//Usando la programación dinámica

#include<iostream>
using namespace std;
const int n = 10;
int obtenerFeoN() {

    int Feo[n];
    int i2 = 0, i3 = 0, i5 = 0;
    int multiple_2 = 2;
    int multiple_3 = 3;
    int multiple_5 = 5;
    int sig_feo_n = 1;

    Feo[0] = 1;

    for (int i = 1; i < n; i++) {
        sig_feo_n = min(multiple_2, min(multiple_3, multiple_5));
        Feo[i] = sig_feo_n;
        if (sig_feo_n == multiple_2) {
            i2 = i2 + 1;
            multiple_2 = Feo[i2] * 2;
        }
        if (sig_feo_n == multiple_3) {
            i3 = i3 + 1;
            multiple_3 = Feo[i3] * 3;
        }
        if (sig_feo_n == multiple_5) {
            i5 = i5 + 1;
            multiple_5 = Feo[i5] * 5;
        }
    }
    return sig_feo_n;
}

int main() {
    cout << obtenerFeoN();
    return 0;
}
