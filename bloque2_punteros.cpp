#include <iostream>
using namespace std;

void aplicarIVA(double* precio, double iva) {
	*precio=*precio+(*precio*iva);
}
int main() {
double precio = 100.00;
aplicarIVA(&precio, 0.12);
cout << "Precio con IVA: " << precio << endl; // 112.00
return 0;
}

using namespace std;

void incrementar(int& val, int n){
val += n;
}
// Como se llama:
int contador = 10;
incrementar(contador, 5);

//puntero
 incrementar(int* val, int n){
*val += n;
}
// Como se llama:
int contador = 10;
incrementar(&contador, 5);
//pregunta 1 ambas se llam incrementar la unica diferencia es 
//que uno es con referencia la otra con puntero

//pregunta 2 el operador que aparece es el *
//pregunta 3 Si en ambos casos vale 15