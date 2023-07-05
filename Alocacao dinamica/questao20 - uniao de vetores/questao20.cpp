#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int *vet1;
    vet1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet1[i];
    }

    int m;
    cin>>m;
    int k=0;
    for (int i = 0; i < m; i++)
    {
        int numero;
        cin>>numero;
        bool existe=false;
        for (int j = 0; j < n; j++)
        {
            if (vet1[j]==numero)
            {
                existe=true;
            }
            
        }

        if (!existe)
        {
            k++;
            int *aux;
            aux=new int[n+k];
            copy(vet1,vet1+n+k-1,aux);
            delete[] vet1;
            vet1=aux;
            vet1[n+k-1]=numero;
        }
        
        
    }

    for (int i = 0; i < n+k; i++)
    {
        cout<<vet1[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}