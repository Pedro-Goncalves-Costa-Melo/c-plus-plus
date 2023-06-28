#include <iostream>

using namespace std;

double Media(int vet[], int tam)
{

    int media = 0;
    for (int i = 0; i < tam; i++)
    {
        media += vet[i];
    }
    media /= tam;

    return media;
}
int main()
{

    int n;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    double media = Media(vet, n);

    int mediasN[n];
    for (int i = 0; i < n; i++)
    {
        if (vet[i] <= media)
        {
            mediasN[i] = vet[i] * media;
        }
        else
            mediasN[i] = vet[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << mediasN[i] << " ";
    }
    cout << endl;

    return 0;
}