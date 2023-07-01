#include <iostream>

using namespace std;

struct Vilao
{
    string nome;
    string alvo;
};

struct plano
{
    string nome;
    string vilao;
    int prejuizo;
};

int main()
{

    int n;
    cin >> n;
    Vilao vetVilao[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetVilao[i].nome;
        cin >> vetVilao[i].alvo;
    }

    int m;
    cin >> m;
    plano vetPlano[m];
    for (int i = 0; i < m; i++)
    {
        cin >> vetPlano[i].nome;
        cin >> vetPlano[i].vilao;
        cin >> vetPlano[i].prejuizo;
    }

    string Alvo;
    cin >> Alvo;
    int cont=0;
    for (int i = 0; i < n; i++)
    {
        if (vetVilao[i].alvo == Alvo)
        {
            for (int j = 0; j < m; j++)
            {
                if (vetVilao[i].nome==vetPlano[j].vilao)
                {
                    cout<<vetPlano[j].nome<<" ";
                    cout<<vetPlano[j].prejuizo<<endl;
                    cont++;
                }
                
            }
            
        }
    }
    if (cont==0)
    {
        cout<<-1<<endl;
    }
    
    return 0;
}