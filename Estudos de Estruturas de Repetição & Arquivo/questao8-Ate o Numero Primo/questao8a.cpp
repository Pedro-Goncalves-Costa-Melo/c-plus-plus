#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string nomeArqvIn;
    cin >> nomeArqvIn;
    ifstream entrada(nomeArqvIn);

    int menor, segundoMenor;
    int num;
    int soma = 0;
    bool naoPrimo = true;
    int contAux = 0;

    while (naoPrimo)
    {
        entrada >> num;

        for (int i = 2; i < num; i++)
        {

            if (num % i == 0)
            {
                contAux++;
            }
            if (contAux == 0)
            {
                naoPrimo = false;
            }
            else
            {
                naoPrimo = true;
            }
        }

        if (menor > num)
        {
            segundoMenor = menor;
            menor = num;
        }
        else if (segundoMenor > num)
        {
            segundoMenor = num;
        }
        soma += num;
    }

    string arqvOut;
    entrada >> arqvOut;
    ofstream saida(arqvOut);

    saida << menor << " " << segundoMenor << " " << soma << endl;

    return 0;
}