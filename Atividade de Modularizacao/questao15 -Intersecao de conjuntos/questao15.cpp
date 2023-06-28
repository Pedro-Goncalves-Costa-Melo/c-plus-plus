#include <iostream>

using namespace std;

void Intersecao(int vet1[], int vet2[], int tam1, int tam2, bool confirmacao)
{
    int cont=0;
    if (tam1>tam2)
    {
        for (int i = 0; i < tam1; i++)
        {
            for (int j = 0; j < tam2; j++)
            {
                if (vet1[i]==vet2[j])
                {
                    cont++;
                }
                
            }
            
        }
        
    }
    
    
}

int main()
{

    int M, N;
    cin >> M >> N;

    int vet1[M];
    for (int i = 0; i < M; i++)
    {
        cin >> vet1[i];
    }
    int vet2[N];
    for (int i = 0; i < N; i++)
    {
        cin >> vet2[i];
    }
    bool aux=false;

    Intersecao(vet1, vet2, M, N, aux);

    return 0;
}