/*La sentencia do while 
 
  do{
  	conjunto de instrucciones;
	}while(expresión lógica);
*/

#include<iostream>
#include<stdlib.h> //libreria que nos proporciona el comando system("pause")
using namespace std;

int main(){
	int i;
	i=1;

	do{
	     cout<<i<<endl;
	     i++; //esto aumenta el iterador de uno en uno;
	}while(i<=10);
	
	system("pause"); //esto nos permite que el programa no se cierre a menos que se pulse una tecla.
 	return 0;

}
