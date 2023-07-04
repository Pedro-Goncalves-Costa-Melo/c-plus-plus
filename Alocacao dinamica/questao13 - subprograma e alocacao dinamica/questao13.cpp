#include <iostream>

using namespace std;
int fatorial(int k)
{

    int fatorial = 1;

    for (int i = k; i > 1; i--)
    {
        fatorial *= i;
    }

    return fatorial;
}

float *obterVetor(int n)
{

    float *vet;
    vet = new float[n];

    for (int i = 0; i < n; i++)
    {
        vet[i] =  (i*i + 1.75) / (2 * fatorial(i) + i);
    }

    return vet;
}

int main()
{

    int n;
    cin >> n;
    float *vetor = obterVetor(n);
    

    int m;
    cin >> m;

    for (int i = m; i < n; i++)
    {
        cout << vetor[i]<<endl;
    }

    return 0;
}