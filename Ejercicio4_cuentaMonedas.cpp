// Ejercicio 03 - Cuenta cantidad de monedas
#include <iostream>
using namespace std;
const int nd = -1;
const int N = 3; //mum de momendas
const int tam = 1001; //tamaño del arreglo
int monedas[N] = { 1,2,3 }; //array de monedas
int memo[tam]; //


//metodo inicializar para cada de las posiciones del arreglos

void inicializar() {
    for (int i = 0; i < 1000; i++)
        memo[i] = nd;
}


//aqui donde pasamos el valor
int cambio(int valor) {
    if (valor < 0) return tam;
    if (valor == 0) return 0;
    //si el array en la pos de valor es diferente de -1
    if (memo[valor] != nd) return memo[valor];
    //Ingresa un valor alto, para en la primera, preguntar por el minimo y elija otro nro
    int res = tam;
    //Obtenemos el minimo valor de la secuencia de valores de 1,2,3

    for (int i = 0; i < N; i++)
        //Obtenemos el mínimo valor de ambos
        res = min(res, cambio(valor - monedas[i]));
    return memo[valor] = res + 1; //Como son monedas se aumenta en uno
}



int main()
{
    inicializar();
    //mesert(memo,-1,sizeof, memo); //coloca todos los valores -1
    int val;
    cin >> val;
    cout << "Resultado: " << cambio(val) << endl;
    int valor = val;
    for (int i = 0; i <= valor; i++)
    {
        cout << i << "=" << cambio(i) << endl;
    }

    return 0;


}
