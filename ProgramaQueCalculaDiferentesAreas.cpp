#include <iostream>
#include <cstdlib>
using namespace std;
float AreaRectangulo(float base,float altura){ //Se crea la funcion que calcule el area del triangulo
	float areaRectangulo=base*altura;
	return areaRectangulo; //Devuelve el area del rectangulo
}
float AreaCirculo(float radio){ //Se crea la funcion que calcule el area del circulo
	float areaCirculo=3.1416*radio*radio;
	return areaCirculo; //Devuelve el area del circulo
}
float AreaTriangulo(float base,float altura){ //Se crea la funcion que calcule el area del triangulo
	float areaTriangulo=base*altura/2;
	return areaTriangulo; //Devuelve el area del triangulo
}
int main(){
	float base=0; // Se declaran las variables a utilizar
	float altura=0;
	float radio=0;
	unsigned int opcion=0;
	cout<<"PROGRAMA QUE CALCULA DIFERENTES AREAS"<<endl; //Titulo del programa
	cout<<"Que area quieres calcular?"<<endl; //Ofrece las opciones a elegir para el usuario
	cout<<"1.- Rectangulo\n2.- Circulo\n3.- Triangulo"<<endl;
	cin>>opcion; //Pide que elija una opcion
	system("cls"); //limpia los datos anteriores
	switch(opcion){
		case 1:
			cout<<"Dame el valor de la base"<<endl; //Pide el valor de la base
			cin>>base;
			cout<<"Dame el valor de la altura"<<endl; //Pide el valor de la altura
			cin>>altura;
			cout<<"El area del rectangulo es: "<<AreaRectangulo(base,altura)<<endl; //Imprime el area del rectangulo
			break;
		case 2:
			cout<<"Dame el valor del radio"<<endl; //Pide el radio de la circunferencia
			cin>>radio;
			cout<<"El area del circulo es: "<<AreaCirculo(radio)<<endl; //Imprime el area de la circunferencia
			break;
		case 3:
			cout<<"Dame el valor de la base"<<endl; //Pide el valor de la base
			cin>>base;
			cout<<"Dame el valor de la altura"<<endl; //Pide el valor de la altura
			cin>>altura;
			cout<<"El area del triangulo es: "<<AreaTriangulo(base,altura)<<endl; //Imprime el area del triangulo
			break;
		default:
			cout<<"Esa opcion no existe"<<endl;
	}
	return 0;
}
