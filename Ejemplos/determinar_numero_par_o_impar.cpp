/*Realice un programa que lea un valor entero y que determine si se trata de 
un numero par o impar.*/
#include<iostream>

using namespace std;

int main(){
	int numero;
	cout<<"Digite un numero: "<<endl;
	cin>>numero;
	
	if(numero==0){
		cout<<"El número es cero.\n";
	}
	else if(numero%2==0){
		cout<<"El número es par.\n";
	}
	else{
		cout<<"El número es impar.\n";
	}
	return 0;
  }
