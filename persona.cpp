#include "persona.h"

Persona::Persona(int pId , string pNombre , string pFecha){
	id = pId;
	nombre = pNombre;
	fecha = pFecha;
}
Persona::Persona(){
	id = 80119981;
	nombre = "Diego Mendoza";
	fecha  = "26-Agosto-1998";
}

int Persona::getId(){
	return id;
}

string Persona::getNombre(){
	return nombre;
}

string Persona::getFecha(){
	return fecha;
}

void Persona::setId(int id){
	this->id =  id;
}

void Persona::setNombre(string nombre){
	this-> nombre = nombre;
}

void Persona::setFecha(string nombre){
	this-> fecha = fecha;
}

Persona::~Persona(){

}
