#include <iostream>

using namespace std;

void intercessao(int vet1[], int vet2[], int tam1, int tam2, int &indice, bool &confirma)
{
    int cont = 0;
    if (tam1 > tam2)
    {
        indice = 1;
        for (int i = 0; i < tam1; i++)
        {
            cont = 0;
            for (int j = 0; j < tam2; j++)
            {
                if (vet1[i] == vet2[j])
                {
                    cont++;
                    confirma = true;
                }
            }
            if (cont == 0)
            {
                vet1[i] = -1;
            }
        }
    }
    else
    {
        indice = 2;
        for (int i = 0; i < tam2; i++)
        {
            cont = 0;
            for (int j = 0; j < tam1; j++)
            {
                if (vet2[i] == vet1[j])
                {
                    cont++;
                    confirma = true;
                }
            }
            if (cont == 0)
            {
                vet2[i] = -1;
            }
        }
    }
}
int main()
{

    int n;
    int m;
    cin >> m;
    cin >> n;
    int vet1[m];
    int vet2[n];

    for (int i = 0; i < m; i++)
    {
        cin >> vet1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vet2[i];
    }
    int indice = 0;
    bool confirma = false;
    intercessao(vet1, vet2, m, n, indice, confirma);

    if (confirma)
    {
        if (indice == 1)
        {
            for (int i = 0; i < m; i++)
            {
                if (vet1[i] != -1)
                {
                    cout << vet1[i] << " ";
                }
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (vet2[i] != -1)
                {
                    cout << vet2[i] << " ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}