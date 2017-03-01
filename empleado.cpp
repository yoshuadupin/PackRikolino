#include "empleado.h"

Empleado::Empleado(int pId, string pNombre, string pFecha 
	, double pSalario, int pIdRRHH, string pCargo) :	Persona(pId , pNombre ,pFecha){
	salario = pSalario;
	idRRHH = pIdRRHH;
	cargo = pCargo;
}
Empleado::Empleado(){
	salario = 4000;
	idRRHH = 1024;
	cargo = "Asistente"; 
	nombre = "Juan P.";
	fecha = "2017-02-28";
	id = 61019852;
}

Empleado::~Empleado(){

}

double Empleado::getSalario(){
	return salario;
}

void Empleado::setSalario(double pSalario){
	salario = pSalario;
}

int Empleado::getIdRRHH(){
	return idRRHH;
}

void Empleado::setIdRRHH(int pIdRRHH){
	idRRHH = pIdRRHH;
}
string Empleado::getCargo(){
	return cargo;
}

void Empleado::setCargo(string pCargo){
	cargo = pCargo;
}