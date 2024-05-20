//Escriba un programa que lea de la entrada estándar un carácter e indique
//en la salida estándar si el carácter es una vocal minúscula o no.

#include<isotream>

using namespace std;

int main(){
	char letra;
	cout<<"Digite una letra: ";
	cin>>letra;
	
	switch(letra){
		case 'a': //para comparar carácteres es mejor usar comillas simples
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula";break; //podemos poner varias ordenes en una misma linea separadas por el ;
		default: cout<<"No es una vocal minúscula";break;
	}

	return 0;

}
