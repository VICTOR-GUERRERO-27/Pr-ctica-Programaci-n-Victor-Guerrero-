
#include "iostream"
using namespace std;

int main()
{    //problema 1.4 Construya un diagrama de flujo que resuelva el problema que tienen en una
    //gasolinera. Los surtidores de la misma registran lo que "surten" en galos, pero el precio de la gasolina
     //esta fijado en "litors". El programa debe calcular e imprimir lo que hay que cobrarle al cliente.
  //cada galon tiene 3.785 litros, y el  precio del litro es 8.20
    //Declaracion de variables
    
    float GALONES, TOTAL;
    const float GALON=3.785, PRECIOLITRO=8.20;
    
//Entrada de datos

cout<<" escribe cantidad de galos comprados  "<<"\n";
cin>> GALONES;


//CALCULO
TOTAL=GALONES*GALON*PRECIOLITRO;

//SE IMPRIME RESULTADOS
    cout<<" Hay que cobrar al cliene por "<<GALONES<<"  galones  "<<"debe pagar  "<<TOTAL<<" pesos"<"\n";
    return 0;
}
