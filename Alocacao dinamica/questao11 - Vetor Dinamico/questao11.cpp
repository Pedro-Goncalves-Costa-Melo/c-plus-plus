#include <iostream>

using namespace std;

int realocar(int vet[], int &tam, int cont, int &realocacoes)
{
    if (cont == tam)
    {
        int *aux;
        aux = new int[tam + 5];
        copy(vet, vet + tam, aux);
        vet = aux;
        tam += 5;
        realocacoes++;
    }

    return 0;
}

int main()
{
    int *vet;
    vet = new int[5];

    int cont = 0;
    int realocacoes = 0;
    int tam = 5;
    int n;
    cin >> n;
    while (n > 0)
    {

        vet[cont] = n;

        realocar(vet, tam, cont, realocacoes);
        cont++;

        cin >> n;
    }

    for (int i = 0; i < cont; i++)
    {
        if (vet[i] != 0)
        {
            cout << vet[i] << " ";
        }
    }

    cout << endl;
    cout << tam << endl;
    cout << realocacoes << endl;

    return 0;
}