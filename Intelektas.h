#include "Korta.h"
const int Tikimybes[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 95, 90, 85, 75, 60, 50, 40, 30, 10, 0};

struct Intelektas
{
    Korta Ranka[54];
    int KortuSkaicius = 0;

    int TaskuSkaicius();
    void IdetiKorta(Korta korta);
    void SpaudintiTurimasKortas();
    bool ArImtiKorta();
};
