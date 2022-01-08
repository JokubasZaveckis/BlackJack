#include "Korta.h"
void Korta::Atvaizduoti()
{
    cout << Zenklas << " " << Pavadinimas;
}

string Korta::ToString()
{
    return Zenklas + " " + Pavadinimas;
}
