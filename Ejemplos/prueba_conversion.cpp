//llamar a la librería
#include <iostream>
using namespace std;
//empieza el algoritmo
int main(){
 //declaracion de variables
 float ft,r;
 //solicitamos la cantidad de pies para convertir
 cout<<"Bienvenido vamos a convertir pies a metros"<<endl;
 cout<<"Ingrese la cantidad de pies: "<<endl;
 //leemos el valor ingresado
 cin>>ft;
 //constante m con su valor correspondiente
 const float m = 0.3084;
 //variable r que va a realizar la multiplicacion
 r = ft * m;
 //mostramos en pantalla el resultado
 cout<<" El resultado de la conversion de pies a metros es: "<<r<<endl;
//le indicamos a la pc para que no vuelva a repetir proceso
return 0;
}





