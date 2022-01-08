#include <string>
#include <iostream>
#include "Korta.h"

const string ZENKLAI[] = { "Bugnu", "Piku", "Kryziu", "Sirdziu" };
const string PAVADINIMAI[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Berniukas", "Dama", "Karalius", "Tûzas" };
const int VERTES[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
struct Kalade
{
    Korta Kortos[54];
    int KortuKaladeje = 0;
    int PaimtaKortu = 0; // Kiek jau panaudota kortø

    Kalade();
    void MaisytiKortas();
    void Atstatyti();
    Korta PaimtiKorta();
};
