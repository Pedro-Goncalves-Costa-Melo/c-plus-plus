#include <iostream>

using namespace std;

int indiceVetor(int vet[], int tamanho, int alvo)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i]==alvo)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){

    int TAM;
    cin>>TAM;
    int vet[TAM];
    for (int i = 0; i < TAM; i++)
    {
        cin>>vet[i];
    }
    int target;
    cin>>target;
    int solucao=indiceVetor(vet,TAM,target);
    cout<<solucao<<endl;


    return 0;
}