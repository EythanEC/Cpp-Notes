/*Uso de la sentencia switch la cuál consiste en:
switch (expresion) {
    case valor1:
        // Código a ejecutar si la expresión es igual a valor1
        break;
    case valor2:
        // Código a ejecutar si la expresión es igual a valor2
        break;
    // Puedes tener más casos aquí
    default:
        // Código a ejecutar si la expresión no coincide con ningún caso
}

*/
#include <iostream>
using namespace std;
int main(){
	int miu;
	cout<<"Ingrese un número entero "<<endl;
	cin>>miu;
	switch(miu){
		case 1: cout<<"Estás muy lejo, vuelve a ingresar el número"<<endl; break;
		case 2: cout<<"Cada vez te acercas más, vuelve a digitar otro número"<<endl; break;
		case 3: cout<<"Este es el rango mínimo"<<endl; break;
		case 4: cout<<"Superaste el interválo, felicidades"<<endl; break;
		default: cout<<"La cantidad mínima de puntaje debe de ser 12"<<endl; break;
	}
	return 0;
} 
