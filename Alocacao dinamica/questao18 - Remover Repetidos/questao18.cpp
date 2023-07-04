#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int *vet;
    vet = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    int tam=n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && vet[i]!=-1 &&vet[i] == vet[j])
            {
                vet[j]=-1;
                tam--;
            }
        }
    }
    int *aux;
    aux = new int[tam];
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]!=-1)
        {
            aux[k]=vet[i];
            k++;
        }
        
    }
    delete[]vet;
    vet=aux;
    
    cout<<tam<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<vet[i]<<" ";
    }
    
    return 0;
}