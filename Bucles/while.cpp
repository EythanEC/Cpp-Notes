/*La sentencia while:
 
 	while(expresión lógica){
	conjunto de instrucciones;
	}
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int e; //creamos la variable de tipo entero.
	e=1; //luego le asignamos el valor con el cual quiero que empiece la variable

	while(e<=20){ //empieza el bucle donde le digo que si e es igual o menor a 20 comience el bucle.
		cout<<e<<endl;
		e++; //esto lo que hace es que la variable "e" va a aumentar de 1 en 1
	} //aqui finaliza el bucle while
	getch(); //este comando permite que no se ciere el ejecutable y podamos ver el contenido
	return 0;
 }
