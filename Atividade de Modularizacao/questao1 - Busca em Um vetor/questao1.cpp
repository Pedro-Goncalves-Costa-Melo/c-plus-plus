#include <iostream>

using namespace std;


int Busca(int tamanho, int vet[], int buscar)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i]==buscar)
        {
            return 1;
        }
        
    }
    return 0;
}
int main(){

    int TAM;
    cin>>TAM;
    int vet[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin>>vet[i];
    }
    int search;
    cin>>search;

    int resposta=Busca(TAM, vet, search);

    cout<<resposta<<endl;

    return 0;
}