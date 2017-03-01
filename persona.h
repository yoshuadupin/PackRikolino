#pragma once
#include <string>

using namespace std;

class Persona
{
protected:
	string nombre;
	int id;
	string fecha;	
public:
	Persona();
	Persona(int, string , string);
	~Persona();
	
	void setNombre(string);
	void setId(int);
	void setFecha(string);

	string getNombre();
	int getId();
	string getFecha();	

};