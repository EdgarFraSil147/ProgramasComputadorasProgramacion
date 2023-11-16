#include <iostream>
using namespace std;
int main(){
	int valorDelantero=0;
	int valorIntermedio=1;
	int valorTrasero=0;
	int posicion=0;
	cout<<"PROGRAMA QUE MUESTRA LA SECUENCIA FIBONACCI"<<endl;
	do{
		cout<<"Dame la posicion maxima positiva"<<endl;
		cin>>posicion;
		if(posicion<0){
			cout<<"Esa posicion no es posible"<<endl;
		}
	}
	while(posicion<0);
	cout<<"La secuencia FIBONACCI antes de esa posicion es: "<<endl;
	cout<<valorTrasero<<", "<<valorIntermedio<<", ";
	for(int i=0; i<=posicion; i++){
		valorDelantero=valorIntermedio+valorTrasero;
		valorTrasero=valorIntermedio;
		valorIntermedio=valorDelantero;
		cout<<valorDelantero<<", ";
	}
	return 0;
}
