/* La sentencia for
 
   for(expr1; expresión lógica; expr2){
   	conjunto de instrucciones
   }
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){ //inicio del código
 
  int i;
  //el bucle for también nos permite declarar la variable dentro de este.
  for(i=1; i<=10; i++);{ //la primera parte inicia el iterador, la segunda parte es la condición lógica y por ultimo el incremento del iterador.
	cout<<i<<endl;
  }
  
  getch();
  return 0;

} //fin del código
