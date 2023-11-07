#include <iostream>
using namespace std;
float GradosCelsius(float gradosFarenheit){
	float gradosCelsius=(gradosFarenheit-32) /1.8;
	return gradosCelsius;
}
float GradosFarenheit(float gradosCelsius){
	float gradosFarenheit=gradosCelsius*1.8 + 32;
	return gradosFarenheit;
}
int main(){
	float celsius=0;
	float farenheit=0;
	unsigned int opcion=0;
	cout<<"PROGRAMA QUE REALIZA CONVERSIONES ENTRE TEMPERATURAS"<<endl;
	cout<<"A que quieres convertir?"<<endl;
	cout<<"1.- Celsius a Farenheit\n2.-Farenheit a Celsius"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"Dame la temperatura en grados Celsius"<<endl;
			cin>>celsius;
			cout<<celsius<<" grados celsius son: "<<GradosFarenheit(celsius)<<" grados farenheit"<<endl;
			break;
		case 2:
			cout<<"Dame la temperatura en grados Farenheit"<<endl;
			cin>>farenheit;
			cout<<farenheit<<" grados farenheit son: "<<GradosCelsius(farenheit)<<" grados celsius"<<endl;
			break;
		default:
			cout<<"Esa opcion no existe";
			break;
	}
	return 0;
}
