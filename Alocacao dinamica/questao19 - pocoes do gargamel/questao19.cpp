#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string *vet1;
    vet1 = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet1[i];
    }

    int m;
    cin >> m;

    string *vet2;
    vet2 = new string[m];

    for (int i = 0; i < m; i++)
    {
        cin >> vet2[i];
    }

    int cont;
    int contTamanho = n;
    for (int i = 0; i < m; i++)
    {
        cont = 0;
        for (int j = 0; j < n; j++)
        {
            if (vet2[i] != vet1[j])
            {
                cont++;
            }
        }
        if (cont == n)
        {
            contTamanho++;
            string *aux;
            aux = new string[contTamanho];
            for (int k = 0; k < contTamanho - 1; k++)
            {
                aux[k] = vet1[k];
            }
            delete[] vet1;
            vet1 = aux;
            vet1[contTamanho - 1] = vet2[i];
        }
    }

    cout << contTamanho << endl;

    for (int i = 0; i < contTamanho; i++)
    {
        cout<<vet1[i]<<endl;
    }
    
    delete[]vet1;
    
    return 0;
}