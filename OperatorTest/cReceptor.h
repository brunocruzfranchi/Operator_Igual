#pragma once
#if !defined(EA_2BC934AB_EAD9_45fb_82F0_8C179B691571__INCLUDED_)
#define EA_2BC934AB_EAD9_45fb_82F0_8C179B691571__INCLUDED_

#include "cPaciente.h"

class cReceptor : public cPaciente
{
	public:
		cReceptor(eTipoSangre _TipoDeSangre);

		virtual ~cReceptor();

	private:

};
#endif
