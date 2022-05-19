#include "cReceptor.h"

cReceptor::cReceptor(eTipoSangre _TipoDeSangre):cPaciente(_TipoDeSangre)
{
}

cReceptor::~cReceptor()
{

}

string cReceptor::To_string()
{
    return "El receptor tiene el tipo de sangre: " + eTipoSangreToString(this->get_tiposangre());
}


