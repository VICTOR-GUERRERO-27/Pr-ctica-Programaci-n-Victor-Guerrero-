#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int A,B;
	float RES;
	//Mensaje de bienvinida
	cout << "Hola! Este programa 1.7 Escribrir el resultado de la expresión" << "\n";
	
	//Se declaran los números que se sumarán (pueden ser decimales)
	
	//Se pide el primer numero
	cout << "Por favor ingrse el valor de A: " << "\n";
	//Se asigna el primer valor a A
	cin >> A;
	//Se pide el segundo numero
	cout << "Por faavor inngrese el valor B: " << "\n";
	//Se asigna el segundo valor a B
	cin >> B;
	
	RES=((A+B))*((A+B))/3.0;
	
	//Se muestra el resultado.
	printf ("\n El resultado de la expresion es %5.4f \n" , RES );
	cout << "EL RESULTADO DE LA OPRESION ES " << RES << "\n"
	
	return 0;
}
