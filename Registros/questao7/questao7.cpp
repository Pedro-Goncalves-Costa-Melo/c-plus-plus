#include <iostream>

using namespace std;

struct Alimento
{
    string nome;
    int quant;
};

int main()
{

    int n;
    cin >> n;
    Alimento vetAlimentos[n];
    for (
        int i = 0; i < n; i++)
    {
        cin >> vetAlimentos[i].nome;
        cin >> vetAlimentos[i].quant;
    }

    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        string nome;
        string al;
        int quant;

        cin>>nome;
        cin>>al;
        cin>>quant;
        
        for (int j = 0; j < n; j++)
        {
            if (al==vetAlimentos[j].nome)
            {
                vetAlimentos[j].quant-=quant;
            }
            
        }
        cin>>al;
        cin>>quant;
        for (int j = 0; j < n; j++)
        {
            if (al==vetAlimentos[j].nome)
            {
                vetAlimentos[j].quant-=quant;
            }
            
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<vetAlimentos[i].nome<<" "<<vetAlimentos[i].quant;
        cout<<endl;
    }
    
    return 0;
}