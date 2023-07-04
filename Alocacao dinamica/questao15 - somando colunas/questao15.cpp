#include <iostream>

using namespace std;

int main()
{

    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int *vet = new int[5];
    for (int i = 0; i < 5; i++)
    {
        vet[i] = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            vet[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;

    delete[] vet;

    return 0;
}