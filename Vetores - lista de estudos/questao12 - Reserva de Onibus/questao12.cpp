#include <iostream>

using namespace std;

int main(){

    string vet[8] = {"disponivel", "disponivel", "disponivel", "disponivel", "disponivel", "disponivel", "disponivel", "disponivel"};
    
    string nomes="ok";
    int numero;
    int contNaoAtendidos=0;
    while (nomes!="fim")
    {
        cin>>nomes;
        cin>>numero;
        if (vet[numero]=="disponivel")
        {
            vet[numero]=nomes;
        }else if(numero>=0 and numero<=7)
        {
            contNaoAtendidos++;
        }
        
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<vet[i]<<endl;
    }
    cout<<contNaoAtendidos<<endl;


    return 0;
}