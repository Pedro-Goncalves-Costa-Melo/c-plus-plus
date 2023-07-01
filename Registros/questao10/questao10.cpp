#include <iostream>

using namespace std;

struct atleta
{
    string nome;
    string esporte;
    int idade;
    float altura;
};

int main(){

    atleta vetAtleta[5];
    cin>>vetAtleta[0].nome;
    cin>>vetAtleta[0].esporte;
    cin>>vetAtleta[0].idade;
    cin>>vetAtleta[0].altura;

    float maiorAltura = vetAtleta[0].altura;
    int maisVelho = vetAtleta[0].idade;
    for (int i = 1; i < 5; i++)
    {
        cin>>vetAtleta[i].nome;
        cin>>vetAtleta[i].esporte;
        cin>>vetAtleta[i].idade;
        cin>>vetAtleta[i].altura;

        if (vetAtleta[i].altura>maiorAltura)
        {
            maiorAltura=vetAtleta[i].altura;
        }

        if (vetAtleta[i].idade>maisVelho)
        {
            maisVelho=vetAtleta[i].idade;
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (vetAtleta[i].altura==maiorAltura)
        {
            cout<<vetAtleta[i].nome<<" ";
            cout<<vetAtleta[i].esporte<<endl;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetAtleta[i].idade==maisVelho)
        {
            cout<<vetAtleta[i].nome<<" ";
            cout<<vetAtleta[i].esporte<<endl;
        }
        
    }
    

    return 0;
}