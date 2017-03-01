#pragma once
#include "persona.h"
#include <string>

using namespace std;

class Empleado: public Persona {
private:
	double salario;
	int idRRHH;
	string cargo;

public:
	Empleado();

	// Recibe el id de la persona nombre persona , fecha nacimiento , salario , idRRHH y cargo
	Empleado(int , string , string , double , int , string);
	~Empleado();
	double getSalario();
	void setSalario(double);
	int getIdRRHH();
	void setIdRRHH(int);
	string getCargo();
	void setCargo(string);

};