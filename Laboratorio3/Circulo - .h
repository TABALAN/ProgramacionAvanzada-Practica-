#pragma once
class Circulo
{
private:
	double radio;
public:
	Circulo(double pRadio);

	double ObtenerPerimetro();
	double ObtenerArea();
	double ObtenerVolumen();
};
