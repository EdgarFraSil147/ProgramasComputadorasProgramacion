#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int primerValor=0;
	int segundoValor=0;
	bool continuar=0;
	cout<<"PROGRAMA QUE SUMA INCREMENTOS"<<endl;
	cout<<"Dame el primer numero entero a sumar"<<endl;
	cin>>primerValor;
	cout<<"Dame el segundo numero entero a sumar"<<endl;
	cin>>segundoValor;
	do{
		primerValor=primerValor+segundoValor;
		cout<<"El resultado de la suma es: "<<primerValor<<endl;
		cout<<"Quieres sumar otro numero?\n1.- Si\t\t0.- No"<<endl;
		cin>>continuar;
		system("cls");
		if(continuar==1){
			cout<<"Dame el nuevo numero entero a sumar"<<endl;
			cin>>segundoValor;
		}
	}
	while(continuar==1);
	return 0;
}
