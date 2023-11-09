#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void delay(int secs){
	for(int i=(time(NULL)+secs);time(NULL)!=i;time(NULL));
}
int Aleatorio(){
	srand(time(NULL));
	int numero=0;
	do{
		numero=rand()%100;
	}
	while(numero<1||numero>10);
	return numero;
}
int main(){
	int numeroAdivinar=0;
	int intento=0;
	numeroAdivinar=Aleatorio();
	cout<<"PROGRAMA PARA ADIVINAR UN NUMERO"<<endl;
	cout<<"Adivina mi numero entero del 1 al 10"<<endl;
	do{
		cin>>intento;
		if(numeroAdivinar!=intento){
			cout<<"Ese no es, vuelve a intentarlo en 3 segundos"<<endl;
			delay(3);
		}
		system("cls");
	}
	while(numeroAdivinar!=intento);
	cout<<"FELICIDADES! ESE ES MI NUMERO :D"<<endl;
	return 0;
}
