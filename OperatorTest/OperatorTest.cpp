
#include <iostream>
#include "cDonante.h"

int main()
{
    cDonante* new_donante = new cDonante(eTipoSangre::A_Pos);
    cDonante* new_donante2 = new cDonante(eTipoSangre::A_Neg);

    cReceptor* new_receptor = new cReceptor(eTipoSangre::A_Neg);

    cout << "Donante 1:" << endl;

    if ((*new_donante) == new_receptor)
        cout << "Le puede donar el organo wuhuu" << endl;
    else
        cout << "No le puede donar el organo -.-" << endl;

    cout << "Donante 2:" << endl;

    if ((*new_donante2) == new_receptor)
        cout << "Le puede donar el organo wuhuu" << endl;
    else
        cout << "No le puede donar el organo -.-" << endl;

    delete new_donante;
    delete new_donante2;
    delete new_receptor;

    return 0;

}

