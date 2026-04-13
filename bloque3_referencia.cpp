#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void mostrarEstudiantes(string n[], double v[], int tam){
	for(int i=0;i<tam;i++){
		cout<<n[i]<<" - "<<fixed<<setprecision(2)<<v[i]<<endl;
	}
}
void ajustarNota(double*nota, double bonus){
	*nota=*nota+bonus;
	if(*nota>10){
		*nota=10;
	}
}

void normalizarNotas(double notas[], int tam, double &promedio){
	double suma=0;
	for(int i=0;i<tam;i++){
		suma=suma+notas[i];
	}
	promedio=suma/tam;
}
int main(){
	double promedio=0;
	string nombres[4]={"Matias", "Juan", "Nava", "Rosero"};
	double notas[4]={9.10,6.90,9.876,10};
	double * nota= notas;
	cout<<"=====Registro Inicial ====="<<endl;
	mostrarEstudiantes(nombres,notas,4);
	ajustarNota(&notas[1],0.5);
	normalizarNotas(notas,4,promedio);
	cout << "===== Registro Final =====" << endl;
    mostrarEstudiantes(nombres, notas, 4);
    cout << "Promedio del curso: " << fixed << setprecision(2) << promedio << endl;

	return 0;
}