#pragma once
#if !defined(EA_F01CC740_4F95_4887_956F_D15EB8EAA0B2__INCLUDED_)
#define EA_F01CC740_4F95_4887_956F_D15EB8EAA0B2__INCLUDED_

#include "gbl.h"

class cPaciente
{
	public:
		cPaciente(eTipoSangre _TipoDeSangre);

		virtual ~cPaciente();
	
		eTipoSangre get_tiposangre() { return TipoDeSangre; };

	private:

		eTipoSangre TipoDeSangre;

};
#endif
