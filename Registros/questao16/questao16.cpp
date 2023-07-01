#include <iostream>

using namespace std;

struct jedi
{
    string nome;
    string classe;
    string pedra;
    string cor;
};

int main()
{

    int n;
    cin >> n;
    jedi vetJedi[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetJedi[i].nome;
        cin >> vetJedi[i].classe;
        cin >> vetJedi[i].pedra;
        cin >> vetJedi[i].cor;
    }
    string alvo;
    cin >> alvo;

    string ClasseAux[n];
    int QuantAux[n];

    int contAux;
    for (int i = 0; i < n; i++)
    {
        contAux=0;
        for (int j = 0; j < n; j++)
        {
            if (i != j and ClasseAux[j] != vetJedi[i].classe)
            {
                contAux++;
            }
        }
        if (contAux == n - 1)
        {
            ClasseAux[i] = vetJedi[i].classe;
            QuantAux[i]=0;
        }
        else
        {
            ClasseAux[i] = "LIXO";
            QuantAux[i]=0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (vetJedi[i].cor==alvo)
        {
            for (int j = 0; j < n; j++)
            {
                if (vetJedi[i].classe==ClasseAux[j])
                {
                    QuantAux[j]++;
                }
                
            }
            
        }
        
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (ClasseAux[i]!="LIXO")
        {
            cout<<ClasseAux[i]<<" "<<QuantAux[i]<<endl;
        }
        
    }
    

    return 0;
}