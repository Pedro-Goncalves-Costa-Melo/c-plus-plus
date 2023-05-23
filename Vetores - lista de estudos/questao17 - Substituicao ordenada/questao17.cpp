#include <iostream>

using namespace std;

int main()
{

    int vet[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> vet[i];
        while (vet[i] < 0)
        {
            cin >> vet[i];
        }
    }
    int menor=-1;
    int indice=0;
    for (int i = 0; i < 5; i++)
    {
        if (vet[i]>menor)
        {
            menor=vet[i];
            indice=i;
        }
        
    }
    
    int p;
    for (int i = 0; i < 5; i++)
    {
        menor=vet[indice];
        p=0;
        for (int k = 0; k < 5; k++)
        {
            
            if (menor>vet[p] and vet[p]!=-1)
            {
                menor=vet[p];
            }
            p++;
        }
        
        for (int j = 0; j < 5; j++)
        {
            if (vet[j]==menor)
            {
                vet[j]=-1;
            }
            
        }
        for (int l = 0; l < 5; l++)
        {
            cout<<vet[l]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}