#include <iostream>

using namespace std;
struct storm
{
    string nome;
    string planeta;
    int batalhas;
};

int main(){

    int n;
    cin>>n;
    storm vetStorm[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vetStorm[i].nome;
        cin>>vetStorm[i].planeta;
        cin>>vetStorm[i].batalhas;
    }
    string PlanetaAux[n];
    int QuantAux[n];
    int BatalhasAux[n];

    int contAux;
    for (int i = 0; i < n; i++)
    {
        contAux=0;
        for (int j = 0; j < n; j++)
        {
            if (i!=j and PlanetaAux[j] !=vetStorm[i].planeta)
            {
                contAux++;
            }
            
        }
        if (contAux==n-1)
        {
            PlanetaAux[i]=vetStorm[i].planeta;
            QuantAux[i]=0;
            BatalhasAux[i]=0;
        }
        else
        {
            PlanetaAux[i]="LIXO";
            QuantAux[i]=0;
            BatalhasAux[i]=0;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vetStorm[i].planeta==PlanetaAux[j])
            {
                QuantAux[j]++;
                BatalhasAux[j]+=vetStorm[i].batalhas;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (PlanetaAux[i]!="LIXO")
        {
            cout<<PlanetaAux[i]<<" "<<QuantAux[i]<<" "<<(float)BatalhasAux[i]/(float)QuantAux[i]<<endl;
        }
        
    }
    
    return 0;
}