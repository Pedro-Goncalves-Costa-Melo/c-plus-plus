#include <iostream>

using namespace std;

int main(){

    //Pegando os valores digitados até encontrar -1;
    int n=200;
    float vet[n];
    bool continua=true;
    int i=0;
    while (continua)
    {
        cin>>vet[i];

        if (vet[i]==-1)
        {
            continua=false;
        }
        i++;
    }

    //Declarando o tamanho do vetor como a quantidade de dados inseridos menos o -1;
    n=i-1;

    //                   TESTE 1
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<vet[i]<<" ";
    // }
    


    //Delimitando qual a quantidade de vezes que um numero deve aparecer para ser considerado moda
    int repeticoes=0;
    int MaiorNumeroDeRepeticoes=1;
    for (int i = 0; i < n; i++)
    {
        repeticoes=1;
        for (int j = i+1; j < n; j++)
        {
            if (vet[i]==vet[j])
            {
                repeticoes++;
            }

            if (repeticoes>MaiorNumeroDeRepeticoes)
            {
                MaiorNumeroDeRepeticoes=repeticoes;
            }
            
            
        }
        
    }

    //                                TESTE 2
    // cout<<MaiorNumeroDeRepeticoes<<endl;


    //Verificar quantos números possuem essa mesma quantidade de repetição
    int QuantasModas=0;
    for (int i = 0; i < n; i++)
    {
        repeticoes=1;
        for (int j = i+1; j < n; j++)
        {
            if (vet[i]==vet[j])
            {
                repeticoes++;
            }
            
        }
        if (repeticoes==MaiorNumeroDeRepeticoes)
        {
            QuantasModas++;
        }
        
    }

    //                   TESTE 3
    cout<<QuantasModas<<endl;
    
    

    return 0;
}