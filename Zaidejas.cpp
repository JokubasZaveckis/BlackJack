#include "Zaidejas.h"
int Zaidejas::TaskuSkaicius()
{
    int sum = 0;
    for (int i = 0; i < KortuSkaicius; i++)
    {
        sum += Ranka[i].Verte;
    }
    return sum;
}

void Zaidejas::IdetiKorta(Korta korta)
{
    Ranka[KortuSkaicius] = korta;
    KortuSkaicius++;
}

void Zaidejas::SpaudintiTurimasKortas()
{
    std::cout << "Taskai: " << TaskuSkaicius() << std::endl;

    for (int i = 0; i < KortuSkaicius; i++)
    {
        Ranka[i].Atvaizduoti();
        std::cout << std::endl;
    }
}
