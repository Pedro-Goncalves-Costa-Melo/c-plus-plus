#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int *vet;
    vet = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    int tam = n;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] % 3 == 0 and vet[i] % 2 != 0)
        {
            vet[i] = -1;
            tam--;
        }
    }
    int *vetAux;
    vetAux = new int[tam];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] != -1)
        {
            vetAux[k] = vet[i];
            k++;
        }
    }
    delete[] vet;
    vet = vetAux;
    cout << tam << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vet[i]<<" ";
    }
    cout << endl;
    

    return 0;
}