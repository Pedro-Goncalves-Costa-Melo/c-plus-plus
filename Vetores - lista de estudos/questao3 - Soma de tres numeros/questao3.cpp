#include <iostream>

using namespace std;

int main()
{

    // Pega o tamanho do vetor
    int T;
    cin >> T;

    // Pega os elementos do vetor de tamanho "T"
    int vet[T];
    for (int i = 0; i < T; i++)
    {
        cin >> vet[i];
    }

    // Diz qual valor deve ser procurado entre os elementos
    int somaDesejada;
    cin >> somaDesejada;

    int i=0;
    bool continuar=true;
    int contAux=0;
    while (i < T-2 and continuar)
    {
        for (int j = i+1; j < T-1; j++)
        {
            for (int k = j+1; k < T; k++)
            {
                if (vet[i]+vet[j]+vet[k]==somaDesejada and continuar)
                {
                    cout<<vet[i]<<" "<<vet[j]<<" "<<vet[k]<<endl;
                    continuar=false;
                    contAux++;
                }
                
            }
        }
        i++;
    }

    if (contAux==0)
    {
        cout<<-1<<endl;
    }
    
    

    return 0;
}