#pragma once
#include <string>
using namespace std;

class Estudiante
{
private:
	string nombreEstudiante;
	string apellidoEstudiante;
	string carneEstudiante;
	string inscripcionEstudiante = "Inscrito";
	string telefonoEstudiante;
	string fechaNacimiento;
	string inscrito;
	string carne;
public:
	//Constructor
	Estudiante(string pnombreEstudiante, string papellidoEstudiante, string pfechaNacimiento, string ptelefonoEstudiante, string pcarneEstudiante);

	//Definir métodos
	string ObtenerNombreCompleto();
	string ObtenerTelefono();
	string ObtenerCarne();
	void AsignarCarne();
	string EstaInscrito();
	void Inscribir();
};

