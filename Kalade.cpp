#include "Kalade.h"

Kalade::Kalade()
{
    for (int zenklas = 0; zenklas < 4; zenklas++)
    {
        for (int pavadinimas = 0; pavadinimas < 12; pavadinimas++)
        {
            Korta korta;
            korta.Pavadinimas = PAVADINIMAI[pavadinimas];
            korta.Zenklas = ZENKLAI[zenklas];
            korta.Verte = VERTES[pavadinimas];
            Kortos[KortuKaladeje] = korta;
            KortuKaladeje++;
        }
    }
}

void Kalade::MaisytiKortas()
{
    for (int i = 0; i < 1000; i++)
    {
        int n, x;
        n = rand() % KortuKaladeje;
        x = rand() % KortuKaladeje;
        Korta tmp = Kortos[n];
        Kortos[n] = Kortos[x];
        Kortos[x] = tmp;
    }
}

void Kalade::Atstatyti()
{
    PaimtaKortu = 0;
    MaisytiKortas();
}
Korta Kalade::PaimtiKorta() {
	return Kortos[PaimtaKortu++];
}

