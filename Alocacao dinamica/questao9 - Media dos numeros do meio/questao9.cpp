#include <iostream>

using namespace std;

int main()
{

    int *vet;
    vet = new int[2];

    int n;
    int cont = 0;
    int cont2 = 2;

    while (n != -1)
    {
        cin >> n;

        if (n != -1)
        {
            vet[cont] = n;
            cont++;
            if (cont == cont2)
            {
                int *aux;
                aux = new int[cont2 + 2];
                copy(vet, vet + cont, aux);
                vet = aux;
                cont2 += 2;
            }
        }
    }

    if (cont % 2 == 0)
    {
        cout << (float)(vet[cont / 2] + vet[cont / 2 - 1]) / 2 << endl;
    }
    else
        cout << (float)vet[cont / 2] / 2 << endl;


    return 0;
}