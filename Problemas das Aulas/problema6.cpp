#include <iostream>

using namespace std;

struct dados
{
    string nome;
    string presente;
    int boasAcoes;
    int travessuras;
};

int main(){

    int tamanho;
    cout<<"Quantas criancas sao: "<<endl;
    cin>>tamanho;
    dados crianca[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cin>>crianca[i].nome;
        cin>>crianca[i].presente;
        cin>>crianca[i].boasAcoes;
        cin>>crianca[i].travessuras;
    }
    
    int cont=0;
    for (int i = 0; i < tamanho; i++)
    {
        if (crianca[i].boasAcoes>=crianca[i].travessuras)
        {
            cout<<crianca[i].presente<<endl;
            cont++;
        }
        
    }
    if (cont==0)
    {
        cout<<"nada"<<endl;
    }
    
    


    return 0;
}