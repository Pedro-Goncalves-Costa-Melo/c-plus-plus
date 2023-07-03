#include <iostream>

using namespace std;

struct Atleta
{
    float tempo;
};


int main(){

    Atleta *vetAtletas;
    vetAtletas = new Atleta[8];

    for (int i = 0; i < 8; i++)
    {
        cin>>vetAtletas[i].tempo;
    }
    float menor = vetAtletas[0].tempo;

    for (int i = 1; i < 8; i++)
    {
        if (vetAtletas[i].tempo<menor)
        {
            menor=vetAtletas[i].tempo;
        }
        
    }

    for (int i = 0; i < 8; i++)
    {
        if (vetAtletas[i].tempo!=menor)
        {
            vetAtletas[i].tempo-=menor;
        }
        cout<<vetAtletas[i].tempo<<endl;
    }
    
    
    return 0;
}