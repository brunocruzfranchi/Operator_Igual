#include "cPaciente.h"

cPaciente::cPaciente(eTipoSangre _TipoDeSangre)
{
	this->TipoDeSangre = _TipoDeSangre;
}

cPaciente::~cPaciente()
{

}

string cPaciente::To_string()
{
	return "El paciente tiene el tipo de sangre: " + eTipoSangreToString(TipoDeSangre);
}

