//Escirba un programa que solicite una edad (un entero) e indique en la
// salida estándar si la edad introducida está en el rango (18-25).

#include<iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Digite su edad: "; //pedimos los datos al usuario.
	cin>>edad; //guardamos en la variable del tipo entero creada anteriormente
	//18-19-20-21-22-23-24-25 rango de edades
	if(edad>=18)&&(edad<=25){
		cout<<"Su edad está en el rango de [18-25]<<endl;
	}
	else{
		cout<<"Su edad no está en dicho rango\n";
	}
	
	return 0;
}

