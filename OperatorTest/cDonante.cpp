#include "cDonante.h"

cDonante::cDonante(eTipoSangre _TipoDeSangre):cPaciente(_TipoDeSangre)
{

}

cDonante::~cDonante() //Destructor de Donante
{

}

bool cDonante::operator==(cReceptor* receptor)
{
	if(this->get_tiposangre() == receptor->get_tiposangre())
		return true;
	else
		return false;
}
