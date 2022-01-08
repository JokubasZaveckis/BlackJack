#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>
#include <cstdlib>
#include <unistd.h>
#include "Zaidejas.h"
#include "Kalade.h"
#include "Dyleris.h"
#include "Intelektas.h"


using namespace std;


int main()
{
    int n;
    srand(time(NULL)); // generatoriaus aktyvavimas
    Kalade ka;
    Zaidejas zaid;
    Intelektas dyler;

    ka.MaisytiKortas();

    for (int i = 0; i < 2; i++)
    {
        Korta gautaKorta = ka.PaimtiKorta();
        zaid.IdetiKorta(gautaKorta);
    }

    cout << "BlackJack" << endl;
    cout << endl;
    cout << "Spauskite '1', kad pradetumete nauja zaidima; Spauskite '2', kad uzdarytumete zaidima " << endl;
    cin >> n;
    if (n == 1)
    {
        cout << " Zaidimas pradedamas ";

        while (n != 0 && zaid.TaskuSkaicius() < 22)
        {
            //system("cls");
            zaid.SpaudintiTurimasKortas();
            cout << "1 - dar viena korta, 0 - uzteks" << endl;
            cin >> n;
            if (n == 1)
            {
                Korta gautaKorta = ka.PaimtiKorta();
                zaid.IdetiKorta(gautaKorta);
            }
        }


        while(dyler.ArImtiKorta() == true)
        {
            Korta gautaKorta = ka.PaimtiKorta();
            dyler.IdetiKorta(gautaKorta);
            //system("cls");
            cout << "Traukia dyleris"<< endl;
            dyler.SpaudintiTurimasKortas();
            sleep(1);
        }
        //system("cls");
        zaid.SpaudintiTurimasKortas();
        cout << endl;
        dyler.SpaudintiTurimasKortas();

        if(zaid.TaskuSkaicius() == 21 && dyler.TaskuSkaicius() != 21)
            cout << "Nugalejote "<< endl;
        else if (zaid.TaskuSkaicius() != 21 && dyler.TaskuSkaicius() == 21)
            cout << "Laimejo dyleris" << endl;
        else if (zaid.TaskuSkaicius() == 21 && dyler.TaskuSkaicius() == 21)
            cout << "Lygiosios" << endl;
        else if (zaid.TaskuSkaicius() > 21 && dyler.TaskuSkaicius() < 21)
            cout << "Pralaimejote" << endl;
        else if (zaid.TaskuSkaicius() < 21 && dyler.TaskuSkaicius() > 21)
            cout << "Laimejote" << endl;
        else if (zaid.TaskuSkaicius() < 21 && dyler.TaskuSkaicius() < 21 && zaid.TaskuSkaicius() > dyler.TaskuSkaicius())
            cout << "Laimejote" << endl;
        else if (zaid.TaskuSkaicius() < 21 && dyler.TaskuSkaicius() < 21 && zaid.TaskuSkaicius() < dyler.TaskuSkaicius())
            cout << "Laimejo dyleris" << endl;
        else cout << "Lygiosios " << endl;

    }
    else if (n == 2)
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        cout << " tokio pasirinkimo nera, zaidimas baigiamas ";
    }

    return 0;
}

