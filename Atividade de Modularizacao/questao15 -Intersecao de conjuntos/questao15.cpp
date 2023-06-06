#include <iostream>

using namespace std;


int intercessao(int vet1[], int vet2[], int tamanho1, int tamanho2, int& aux)
{
    for (int i = 0; i < tamanho1; i++)
    {

        int cont=0;
        for (int j = 0; j < tamanho2; j++)
        {
            if (vet1[i]!=vet2[j])
            {
                cont++;
            }
            
        }
        if (cont==tamanho2)
        {
            vet1[i]=-1;
            aux--;
        }
        
    }
    
}
int main(){

    int tam1, tam2;
    cin>>tam1>>tam2;

    int vet1[tam1];
    int vet2[tam2];
    for (int i = 0; i < tam1; i++)
    {
        cin>>vet1[i];
    }
    for (int i = 0; i < tam2; i++)
    {
        cin>>vet2[i];
    }
    int aux=tam1;

    intercessao(vet1,vet2,tam1,tam2,aux);
    if (aux==0)
    {
        cout<<-1<<endl;
    }else
    {
        for (int i = 0; i < tam1; i++)
        {
            if (vet1[i]!=-1)
            {
                cout<<vet1[i]<<" ";
            }
            
        }
        cout<<endl;
    }
    


    return 0;
}