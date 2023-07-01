#include <iostream>

using namespace std;

struct carta
{
    string nome;
    string pedido;
};
struct brinquedo
{
    string nome;
    int disp;
    int req;
};


int main(){

    int n;
    cin>>n;
    carta vetCarta[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vetCarta[i].nome;
        cin>>vetCarta[i].pedido;
    }
    int m;
    cin>>m;
    brinquedo vetBrinquedo[m];
    for (int i = 0; i < m; i++)
    {
        cin>>vetBrinquedo[i].nome;
        cin>>vetBrinquedo[i].disp;
    }

    for (int i = 0; i < m; i++)
    {
        vetBrinquedo[i].req=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vetCarta[i].pedido==vetBrinquedo[j].nome)
            {
                vetBrinquedo[j].req++;
            }
            
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        if (vetBrinquedo[i].req>vetBrinquedo[i].disp)
        {
            cout<<vetBrinquedo[i].nome<<" ";
        }
        
    }
    cout<<endl;

    return 0;
}