#include <iostream>

using namespace std;
struct cestas
{
    string tipo;
    int tam;
};

struct clientes
{
    string nome;
    string tipo;
};

int main(){

    int n;
    cin>>n;
    cestas vetCestas[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vetCestas[i].tipo;
        cin>>vetCestas[i].tam;
    }
    int m;
    cin>>m;
    clientes vetClientes[m];
    for (int i = 0; i < m; i++)
    {
        cin>>vetClientes[i].nome;
        cin>>vetClientes[i].tipo;
    }
    
    int cont=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vetClientes[i].tipo==vetCestas[j].tipo)
            {
                cont+=vetCestas[j].tam;
            }
            
        }
        
    }
    
    cout<<cont<<endl;
    return 0;
}