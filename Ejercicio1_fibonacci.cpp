//ejercicio 1- fibonacci con programación Dinamica 
#include <iostream>
//tamaño de ñla matriz

#define N 100
using namespace std;

const int nd = -1;
int memo[N];

void inicializar()
{
	for (int i = 0; i < N; i++)
	{
		memo[i] = nd;
	}
}

int fibonnacci_memo(int n)
{
	//si memo[n] es igual -1, ingresar, significa que
	//no esta almacenado en esta posisicion 
	//contrario, no ingre a la condición y muestra el resultado
	if (memo[n] = nd) {
		if (n <= 1) //si es el primer elemento
		{
			memo[n] = n;
		}
		else //almacena en memo el resultado
			//va a calcular de manera recursiva el fibonnacci
			memo[n] = fibonnacci_memo(n - 1)+fibonnacci_memo(n-2);
	}
	return memo[n];
}

int main()
{
	//inicializar 
	inicializar();
	memset(memo, -1, sizeof memo); //colo todoslos valores en -1
	cout << fibonnacci_memo(6);
	return 0;
}
