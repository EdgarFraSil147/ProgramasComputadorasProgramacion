#include <iostream>
using namespace std;
void NumerosPrimos(int primo){
	int divisor=2;
	while((primo%divisor)!=0){
		divisor++;
	}
	if(divisor==primo){
		cout<<primo<<endl;	
	}
}
int main(){
	int numeroMaximo=0;
	int primo=2;
	cout<<"PROGRAMA QUE MUESTRA NUMEROS PRIMOS"<<endl;
	cout<<"Dame un numero entero positivo"<<endl;
	cin>>numeroMaximo;
	cout<<"Los numeros primos antes de ese numero son:"<<endl;
	cout<<"1"<<endl;
	for(int i=0; i<=numeroMaximo; i++){
		NumerosPrimos(primo);
		primo++;
	}
	return 0;
}
