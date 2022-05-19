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

		virtual string To_string();

		string eTipoSangreToString(eTipoSangre tipo) {

			switch (tipo)
			{
			case eTipoSangre::O_Neg:
				return "O_Neg";
				break;
			case eTipoSangre::A_Neg:
				return "A_Neg";
				break;
			case eTipoSangre::AB_Neg:
				return "AB_Neg";
				break;
			case eTipoSangre::B_Neg:
				return "B_Neg";
				break;
			case eTipoSangre::O_Pos:
				return "O_Pos";
				break;
			case eTipoSangre::A_Pos:
				return "A_Pos";
				break;
			case eTipoSangre::AB_Pos:
				return "AB_Pos";
				break;
			case eTipoSangre::B_Pos:
				return "B_Pos";
				break;
			default:
				break;
			}

		}

	private:

		eTipoSangre TipoDeSangre;

};


#endif
