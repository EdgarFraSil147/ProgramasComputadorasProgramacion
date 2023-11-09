#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int numeroDoble=0;
	bool continuar=1;
	cout<<"PROGRAMA QUE CALCULA EL DOBLE DE UN NUMERO"<<endl;
	cout<<"Dame el numero entero que quieras calcular:"<<endl;
	cin>>numeroDoble;
	do{
		system("cls");
		cout<<"El doble de: "<<numeroDoble<<" es:"<<endl;
		numeroDoble=numeroDoble*2;
		cout<<numeroDoble<<endl;
		cout<<"Deseas volver a calcular?\n1.- Si\t\t0.- No"<<endl;
		cin>>continuar;
	}
	while(continuar==1);
	return 0;
}
