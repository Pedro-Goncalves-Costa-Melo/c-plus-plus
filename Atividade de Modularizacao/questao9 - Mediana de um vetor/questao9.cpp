#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float mediana(int vet[], int tamanho)
{
    if (tamanho%2!=0)
    {
        return vet[tamanho/2];
    }
    else
    {
        return (float)(vet[tamanho/2]+vet[tamanho/2-1])/2;
    }
    
}

int main(){

    int n;
    cin>>n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    cout<<mediana(vet, n);

    return 0;
}