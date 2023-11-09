#include <iostream>
using namespace std;
int main(){
	int numeroElegir=0;
	int numeroMultiplicador=0;
	cout<<"PROGRAMA PARA MULTIPLICAR DEL 0 AL 10"<<endl;
	cout<<"Dame el numero entero a multiplicar"<<endl;
	cin>>numeroElegir;
	for(int i=0;i<=10;i++){
		cout<<numeroElegir<<" x "<<numeroMultiplicador<<" = "<<numeroElegir*numeroMultiplicador<<endl;
		numeroMultiplicador++;
	}
	return 0;
}
