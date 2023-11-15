#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
	int primerNumero=0;
	int segundoNumero=0;
	int tercerNumero=0;
	int divisor=1;
	char opcion = 'O';
	srand(time(NULL));
	primerNumero=rand()%100;
	segundoNumero=rand()%100;
	tercerNumero=rand()%100;
	cout<<"PROGRAMA QUE DIVIDE NUMEROS ENTRE UN NUMERO ALEATORIO"<<endl;
	do{
		cout<<"Elige un numero:\nA) "<<primerNumero<<"\tB) "<<segundoNumero<<"\tC) "<<tercerNumero<<endl;
		cin>>opcion;
		if(opcion!='A'&&opcion!='B'&&opcion!='C'){
			cout<<"Esa opcion no es valida"<<endl;
		}
	}
	while(opcion!='A'&&opcion!='B'&&opcion!='C');
	switch(opcion){
		case 'A':
			for(int i=1; i<=primerNumero; i++){
				cout<<primerNumero<<" / "<<i<<" = "<<float(primerNumero)/float(divisor)<<endl;
				divisor++;
			}
			break;
		case 'B':
			for(int i=1; i<=segundoNumero; i++){
				cout<<segundoNumero<<" / "<<i<<" = "<<float(segundoNumero)/float(divisor)<<endl;
				divisor++;
			}
			break;
		case 'C':
			for(int i=1; i<=tercerNumero; i++){
				cout<<tercerNumero<<" / "<<i<<" = "<<float(tercerNumero)/float(divisor)<<endl;
				divisor++;
			}
			break;
	}
	return 0;
}
