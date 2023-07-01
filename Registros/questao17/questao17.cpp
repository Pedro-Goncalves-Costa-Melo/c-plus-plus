#include <iostream>

using namespace std;

struct paciente
{
    string nome;
    char sex;
    float altura;
    float peso;
    float pesoIdeal;

};

int main(){

    int n;
    cin>>n;
    paciente vetPacientes[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vetPacientes[i].nome;
        cin>>vetPacientes[i].sex;
        cin>>vetPacientes[i].altura;
        cin>>vetPacientes[i].peso;

        if (vetPacientes[i].sex=='H')
        {
            vetPacientes[i].pesoIdeal=72.7*vetPacientes[i].altura-58;
        }
        else
        {
            vetPacientes[i].pesoIdeal=62.1*vetPacientes[i].altura-44.7;
        }
        
    }
    
    float maiorPeso=vetPacientes[0].peso;
    for (int i = 1; i < n; i++)
    {
        if (maiorPeso<vetPacientes[i].peso)
        {
            maiorPeso=vetPacientes[i].peso;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (vetPacientes[i].peso==maiorPeso)
        {
            cout<<vetPacientes[i].nome<<endl;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (vetPacientes[i].peso>vetPacientes[i].pesoIdeal)
        {
            cout<<vetPacientes[i].nome<<" "<<vetPacientes[i].pesoIdeal-vetPacientes[i].peso<<endl;
        }
        
    }
    
    

    return 0;
}