#include <iostream>

using namespace std;

int main(){

    //Lendo o tamanho do Vetor
    int n;
    cin>>n;

    //Lendo os elementos do vetor
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (vet[i]==vet[j])
            {
                vet[j]=0;
            }
            
        }
        
    }

    int quantosDiff=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]!=0)
        {
            quantosDiff++;
        }
        
    }
    
    cout<<quantosDiff<<endl;
    

    return 0;
}