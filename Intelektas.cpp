#include "Intelektas.h"
#include <iomanip>

void Intelektas::SpaudintiTurimasKortas()
{
    cout << "Taskai: " << TaskuSkaicius() << endl;

    for (int i = 0; i < KortuSkaicius; i++)
    {
        Ranka[i].Atvaizduoti();
        cout << endl;
    }
}

void Intelektas::IdetiKorta(Korta korta)
{
    Ranka[KortuSkaicius] = korta;
    KortuSkaicius++;
}

int Intelektas::TaskuSkaicius()
{
    int sum = 0;
    for (int i = 0; i < KortuSkaicius; i++)
    {
        sum += Ranka[i].Verte;
    }
    return sum;
}

bool Intelektas::ArImtiKorta()
{
    int n = rand() % 100+1;
    if(TaskuSkaicius()>21)
        return false;
               else if(n>Tikimybes[TaskuSkaicius()])
                   return false;
        else return true;
}
