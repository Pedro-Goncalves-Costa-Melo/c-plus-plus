#include <iostream>

using namespace std;

int maiorDoVet(int vet[], int maior, int tamanho)
{
    
    for (int i = 1; i < tamanho; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
        }
        
    }
    return maior;
}
int main(){
    int TAM;
    cin>>TAM;
    int vet[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin>>vet[i];
    }
    int maior=vet[0];

    maior = maiorDoVet(vet, maior, TAM);
    cout<<maior<<endl;
    return 0;
}