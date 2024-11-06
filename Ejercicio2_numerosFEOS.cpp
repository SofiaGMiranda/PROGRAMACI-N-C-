//// Ejercicio 02 - Encontrar el nro FEO en una posición.
//Número Feo: significa que son divisibles 2,3,5
//1,2,3,4,5,6,8,9,10,12,15,16....
//sin programación dinamica 
#include <iostream>
using namespace std;



int maxDivide(int a, int b) {
    while (a % b == 0) //9%3=0, 3%3=0
        a = a / b; //9/3=3, 3/3=1
    return a;
}



//Verificando si el nro es feo

int isFeo(int no) {
    no = maxDivide(no, 2);
    no = maxDivide(no, 3);
    no = maxDivide(no, 5);
    return (no == 1) ? 1 : 0;
}



int obtenerFeoNo(int n) {
    int i = 1;
    int count = 1;
    while (n > count) {
        i++;
        //si el resultado 1 permite contar
        if (isFeo(i))
            count++;
    }
    return i;
}

int main()

{
    int no = obtenerFeoNo(10);
    cout << "El valor es: " << no;
    return  0;
}
