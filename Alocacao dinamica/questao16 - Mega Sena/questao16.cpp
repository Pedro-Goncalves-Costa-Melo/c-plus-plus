#include <iostream>

using namespace std;

struct MegaSena
{
    int n1, n2, n3, n4, n5, n6;
};

int main()
{

    int n;
    cin >> n;

    MegaSena *vet;
    vet = new MegaSena[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].n1;
        cin >> vet[i].n2;
        cin >> vet[i].n3;
        cin >> vet[i].n4;
        cin >> vet[i].n5;
        cin >> vet[i].n6;
    }

    int soma;
    int maior = 0;
    int indiceDoMaior;
    for (int i = 0; i < n; i++)
    {
        soma = 0;
        soma += vet[i].n1;
        soma += vet[i].n2;
        soma += vet[i].n3;
        soma += vet[i].n4;
        soma += vet[i].n5;
        soma += vet[i].n6;

        if (soma > maior)
        {
            maior = soma;
            indiceDoMaior = i;
        }
    }

    cout << vet[indiceDoMaior].n1 << " ";
    cout << vet[indiceDoMaior].n2 << " ";
    cout << vet[indiceDoMaior].n3 << " ";
    cout << vet[indiceDoMaior].n4 << " ";
    cout << vet[indiceDoMaior].n5 << " ";
    cout << vet[indiceDoMaior].n6 << " ";
    cout << endl;

    return 0;
}