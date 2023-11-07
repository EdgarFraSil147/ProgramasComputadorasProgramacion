#include <iostream>
using namespace std;
int main(){
	float primerNumero=0;//Se declaran las variables a utilizar
	float segundoNumero=0;
	cout<<"PROGRAMA QUE SUMA Y RESTA DOS NUMEROS"<<endl; //Titulo del programa
	cout<<"Dame el primer numero"<<endl; //Se pide el primer numero
	cin>>primerNumero;
	cout<<"Dame el segundo numero"<<endl; //Se pide el segundo numero
	cin>>segundoNumero;
	cout<<"La sumatoria de los numeros es: "<<primerNumero + segundoNumero<<endl; //Se realiza la sumatoria
	cout<<"La diferencia de los numeros es: "<<primerNumero - segundoNumero<<endl; //Se realiza la resta
	return 0;
}
