#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int tamanhoDoVetor;
    cin>>tamanhoDoVetor;
    float vet[tamanhoDoVetor];
    float soma=0;
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        cin>>vet[i];
        soma+=vet[i];
    }
    float media=soma/tamanhoDoVetor;
    float numeroAux;
    float somaFinal=0;
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        numeroAux=vet[i]-media;
        numeroAux=pow(numeroAux,2);
        somaFinal+=numeroAux;
    }
    
    float variancia=somaFinal/tamanhoDoVetor;
    cout<<variancia<<endl;

    return 0;
}