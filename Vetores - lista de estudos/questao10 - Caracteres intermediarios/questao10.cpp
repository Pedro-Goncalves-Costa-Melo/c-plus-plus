#include <iostream>

using namespace std;

int main(){

    //Lendo o Tamanho do Vetor
    int n;
    cin>>n;

    //Lendo o vetor
    char vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }

    //Lendo os caracteres Limite
    char Limite1, Limite2;
    cin>>Limite1>>Limite2;

    //Declaração de Variaveis Auxiliares. "j" para o While. "continua" como controle do while e para verificar se deve ser feita a impressão ou não.
    bool continua=true;
    int j=0;

    //Loop principal do código. O For roda pelo tamanho do vetor. Se o vet[i] for igual a algum dos caracteres limite ele comeca o ciclo de impressão, até encontrar o outro caracter limite
    for (int i = 0; i < n; i++)
    {
        if (vet[i]==Limite1 or vet[i]==Limite2)
        {
            j=i;
            while (continua)
            {
                if (vet[j+1]==Limite1 or vet[j+1]==Limite2)
                {
                    continua=false;
                }
                
                if (continua)
                {

                    cout<<vet[j+1]<<" ";
                    
                }
                j++;
            }

        }
        
    }
    
    
    return 0;
}