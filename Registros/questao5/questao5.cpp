#include <iostream>

using namespace std;

struct PoliticoPartido
{
    string nome;
    string partido;
};
struct PF
{
    string operacao;
    string nome;
    int money;
};


int main(){

    int n;
    cin>>n;
    PoliticoPartido vetPolitico[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vetPolitico[i].partido;
        cin>>vetPolitico[i].nome;
    }
    
    int m;
    cin>>m;
    PF vetPf[m];
    for (int i = 0; i < m; i++)
    {
        cin>>vetPf[i].operacao;
        cin>>vetPf[i].nome;
        cin>>vetPf[i].money;
    }
    
    string partido;
    string operacao;

    cin>>partido;
    cin>>operacao;
    int cont=0;
    for (int i = 0; i < m; i++)
    {
        if (vetPf[i].operacao==operacao)
        {
            for (int j = 0; j < n; j++)
            {
                if (vetPf[i].nome==vetPolitico[j].nome and partido ==vetPolitico[j].partido)
                {
                    cont+=vetPf[i].money;
                }
                
                
                
            }
            
        }
        
    }
    
    cout<<cont;


    return  0;
}