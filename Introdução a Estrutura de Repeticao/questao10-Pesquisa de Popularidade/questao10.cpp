#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string NomeArqv, nome1, nome2, nome3, VotoAtual;
    int NumeroVotos, cont1 = 0, cont2 = 0, cont3 = 0;

    cin >>NomeArqv;

    ifstream ArqvIn(NomeArqv);

    if (ArqvIn)
    {
        ArqvIn >> nome1;
        ArqvIn >> nome2;
        ArqvIn >> nome3;
        ArqvIn >> NumeroVotos;

        while (NumeroVotos != 0)
        {
            ArqvIn >> VotoAtual;
            NumeroVotos--;

            if (VotoAtual == nome1)
            {
                cont1++;
            }
            else if (VotoAtual == nome2)
            {
                cont2++;
            }
            else
            {
                cont3++;
            }
        }
        if (cont1 > cont2 and cont1 > cont3)
        {
            cout << cont1 << endl;
        }
        else if (cont2 > cont1 and cont2 > cont3)
        {
            cout << cont2 << endl;
        }
        else
        {
            cout << cont3 << endl;
        }
    }

    return 0;
}