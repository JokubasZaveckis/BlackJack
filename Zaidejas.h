#include <iostream>
#include "Korta.h"
struct Zaidejas
{
    Korta Ranka[54];
    int KortuSkaicius = 0;

    int TaskuSkaicius();
    void IdetiKorta(Korta korta);
    void SpaudintiTurimasKortas();
};
