#include <iostream>

using namespace std;

int menorSaldo(int vet[], int tam, int& soma)
{
    int minimo=soma;
    for (int i = 0; i < tam; i++)
    {
        soma+=vet[i];
        if (soma<minimo)
        {
            minimo=soma;
        }
        
    }
    

    return minimo;
}
int main()
{

    int n;
    cin >> n;
    int soma;
    cin >> soma;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    cout << menorSaldo(vet,n,soma) << endl;
    ;

    return 0;
}