//Ejercicio 1
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
int main() {
int stock = 250;
int* p = &stock;
cout << stock << endl; // 250
cout << p << endl; // Wl lugar de stock(direccion hexadecimal)
cout << *p << endl; // (250
*p = 180; // se vendieron 70 unidades
cout << stock << endl; // 180
return 0;
}

//EJERCICIO 2
void aplicarIVA(double* precio, double iva) {
	*precio=*precio*iva
}
int main() {
double precio = 100.00;
aplicarIVA(&precio, 0.12);
cout << "Precio con IVA: " << precio << endl; // 112.00
return 0;
}

//EJERCICIO 3
//1)
//void incrementar(int& val, int n) este utiliza puntero mientras que el otro
//void incrementar(int* val, int n) utiliza referencia
//2)
//Aparece el puntero de *val 
//3)
//En ambos casos vale 15
