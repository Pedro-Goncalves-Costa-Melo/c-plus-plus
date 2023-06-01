#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string Texto;
    cin>>Texto;
    unsigned posicao;
    cin>>posicao;
    string textoInserido;
    cin>>textoInserido;

    unsigned tamanho2=Texto.length();
    unsigned tamanho2Real=tamanho2-posicao;

    string primeiraParte[posicao];
    string segundaParte[tamanho2Real];

    for (unsigned i = 0; i < posicao; i++)
    {
        primeiraParte[i]=Texto[i];
    }

    for (unsigned i = 0; i < tamanho2Real; i++)
    {   
        segundaParte[i]=Texto[posicao+i];
    }
    
    
    for (unsigned i = 0; i < posicao; i++)
    {
        cout<<primeiraParte[i];
    }
    cout<<textoInserido;
    for (unsigned i = 0; i < tamanho2Real; i++)
    {
        cout<<segundaParte[i];
    }
    cout<<endl;

    
    
    return 0;
}

