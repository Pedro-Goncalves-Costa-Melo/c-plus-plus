#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    //Atribui os elementos ao vetor
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    //Declara maior e menor como sendo elementos do conjundo do vetor, para ter uma regua de valor
    int maior=vet[0], menor=vet[0];
    int contMaior=0, contMenor=0;

    //analiza qual o maior e menor elemento do vetor
    for (int i = 1; i < n; i++)
    {
        if (vet[i]>=maior)
        {
            maior=vet[i];
            contMaior=i;
        }
        if (vet[i]<=menor)
        {
            menor=vet[i];
            contMenor=i;
        }
    }
    
    cout<<maior<<" "<<menor<<" "<<contMaior<<" "<<contMenor<<endl;

    return 0;
}