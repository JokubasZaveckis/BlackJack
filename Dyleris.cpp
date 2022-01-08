#include "Dyleris.h"
bool Dyleris::ArImtiKorta()
{
    if(TaskuSkaicius() >= 16)
        return false;
    return true;
}
int Dyleris::TaskuSkaicius()
{
    int sum = 0;
    for (int i = 0; i < KortuSkaicius; i++)
    {
        sum += Ranka[i].Verte;
    }
    return sum;
}

void Dyleris::IdetiKorta(Korta korta)
{
    Ranka[KortuSkaicius] = korta;
    KortuSkaicius++;
}

void Dyleris::SpaudintiTurimasKortas()
{
    std::cout << "Taskai: " << TaskuSkaicius() << std::endl;

    for (int i = 0; i < KortuSkaicius; i++)
    {
        Ranka[i].Atvaizduoti();
        std::cout << std::endl;
    }
}
