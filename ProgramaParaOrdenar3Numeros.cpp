#include <iostream>
using namespace std;
int main(){
	int primerNumero=0;
	int segundoNumero=0;
	int tercerNumero=0;
	int variableApoyo;
	cout<<"PROGRAMA PARA ORDENAR DE MAYOR A MENOR"<<endl;
	cout<<"Dame el primer numero entero"<<endl;
	cin>>primerNumero;
	cout<<"Dame el segundo numero entero"<<endl;
	cin>>segundoNumero;
	cout<<"Dame el tercer numero entero"<<endl;
	cin>>tercerNumero;
	if(primerNumero!=segundoNumero){
		if(primerNumero!=tercerNumero){
			if(primerNumero>segundoNumero){
				if(segundoNumero>tercerNumero){
					cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
				}
				else{
					if(primerNumero>tercerNumero){
						variableApoyo=segundoNumero;
						segundoNumero=tercerNumero;
						tercerNumero=variableApoyo;
						cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
					}
					else{
						variableApoyo=primerNumero;
						primerNumero=tercerNumero;
						tercerNumero=variableApoyo;
						variableApoyo=segundoNumero;
						segundoNumero=tercerNumero;
						tercerNumero=variableApoyo;
						cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
					}
				}
			}
			else{
				if(segundoNumero>tercerNumero){
					if(primerNumero>tercerNumero){
						variableApoyo=primerNumero;
						primerNumero=segundoNumero;
						segundoNumero=variableApoyo;
						cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
					}
					else{
						variableApoyo=primerNumero;
						primerNumero=segundoNumero;
						segundoNumero=variableApoyo;
						variableApoyo=segundoNumero;
						segundoNumero=tercerNumero;
						tercerNumero=variableApoyo;
						cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
					}
				}
				else{
					variableApoyo=primerNumero;
					primerNumero=tercerNumero;
					tercerNumero=variableApoyo;
					cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
				}
			}
		}
		else{
		if(primerNumero>segundoNumero){
			variableApoyo=segundoNumero;
			segundoNumero=tercerNumero;
			tercerNumero=variableApoyo;
			cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
			}
			else{
			variableApoyo=primerNumero;
			primerNumero=segundoNumero;
			segundoNumero=variableApoyo;
			}
		}
	}
	else{
		if(primerNumero!=tercerNumero){
			if(primerNumero>tercerNumero){
				cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
			}
			else{
				variableApoyo=primerNumero;
				primerNumero=tercerNumero;
				tercerNumero=variableApoyo;
				cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
			}
		}
		else{
			cout<<"El order de mayor a menor es: \n"<<primerNumero<<"\n"<<segundoNumero<<"\n"<<tercerNumero;
		}
	}
	return 0;
}
