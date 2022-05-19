#ifndef _CDONANTE_H
#define _CDONANTE_H

#pragma once
#if !defined(EA_AA37F5F1_6CD6_4558_A02F_8039C0EEFBB8__INCLUDED_)
#define EA_AA37F5F1_6CD6_4558_A02F_8039C0EEFBB8__INCLUDED_

#include "cReceptor.h"

class cDonante : public cPaciente
{
	public:
		cDonante(eTipoSangre _TipoDeSangre);
		virtual ~cDonante();
		bool operator==(cReceptor* receptor);
		virtual string To_string();

	private:
		string HoraComienzoAblacion;
		string HoraMuerte;
};
#endif
#endif

