#include<iostream> //Hacemos un llamado a la librería que vamos a usar en nuestro código.
using namespace std; //Línea necesaria para poder usar la líbreria iostream.
int main(){
	int n1,n2,sum=0,res=0,mul=0,divi=0 //creamos  las variables
	cout<<"Ingrese el primer digito: "<<endl; //pedimos los datos al usuario
	cin>>n1; //guardamos los datos en las respectivas variables
	cout<<"Ingrese el segundo digito: "<<endl;
	cin>>n2;
	sum=n1 + n2; //realizamos las operaciones aritmeticas.
	res=n1 - n2;
	mul=n1 * n2;
	divi=n1 / n2;
	cout<<"\nEl resultado de la suma es: "<<sum; //Le mostramos al usuario el resultado de las operaciones.
	cout<<"\nEl resultado de la resta es: "<<res;
	cout<<"\nEL resultado de la multiplicación es: "<<mul;
	cout<<"\nEl resultado de la división es: "<<divi;
	return 0; //Le indicamos al pc que debe apagar totalmente el proceso.
}
