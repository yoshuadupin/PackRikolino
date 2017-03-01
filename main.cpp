#include "empleado.h"
#include <iostream>
int main(){
	Empleado* emp = new Empleado();
	cout<<"Nombre"<<emp->getNombre()<<endl;

	Empleado* emp2 = new Empleado(8121421  , "Wasalo" ,"2017-02-28" , 5000 , 1030 , "Ejecutivo");

	cout<<"Datos Empleado 2:" <<emp2->getNombre()<<endl;
	Persona* persona = new Empleado(8121421  , "JuanCho" ,"2017-02-28" , 5000 , 1030 , "Ejecutivo");
	dynamic_cast<Empleado*>(persona);//castear objetos
	delete emp;
	return 0;
}