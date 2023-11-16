#include <iostream>
using namespace std;
int ValorPrimo(int primo){
	int divisor=2;
	while(divisor!=primo){
		while((primo%divisor)!=0){
			divisor++;
		}
		if(divisor!=primo){
			primo++;
		}
	}
	return primo;
}
int main(){
	int primerNumero=0;
	int segundoNumero=0;
	int primo=0;
	int guardado=1;
	cout<<"PROGRAMA QUE CALCULA EL MINIMO COMUN MULTIPLO"<<endl;
	cout<<"Dame el primer numero entero"<<endl;
	cin>>primerNumero;
	cout<<"Dame el segundo numero entero"<<endl;
	cin>>segundoNumero;
	cout<<"El minimo comun multiplo de "<<primerNumero<<" y "<<segundoNumero<<" es:"<<endl;
	do{
		primo=2;
		if(primerNumero!=1){
			if(segundoNumero!=1){
				do{
					primo=ValorPrimo(primo);
					if((primerNumero%primo)!=0&&(segundoNumero%primo)!=0){
							primo++;	
						}	
				}
				while((primerNumero%primo)!=0&&(segundoNumero%primo)!=0);
				if((primerNumero%primo)==0){
					primerNumero=(primerNumero/primo);
				}
				if((segundoNumero%primo)==0){
					segundoNumero=(segundoNumero/primo);
				}
				guardado=guardado*primo;
			}
			else{
				do{
					primo=ValorPrimo(primo);
					if((primerNumero%primo)!=0){
						primo++;
					}
				}
				while((primerNumero%primo)!=0);
				primerNumero=(primerNumero/primo);
				guardado=(guardado*primo);
			}
		}
		else{
			if(segundoNumero!=1){
				do{
					primo=ValorPrimo(primo);
					if((segundoNumero%primo)!=0){
						primo++;
					}
				}
				while((segundoNumero%primo)!=0);
				segundoNumero=(segundoNumero/primo);
				guardado=(guardado*primo);
			}
		}
	}
	while(primerNumero!=1||segundoNumero!=1);
	cout<<guardado<<endl;
	return 0;
}
