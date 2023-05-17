#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream entrada("estoque.txt");
    int N;

    entrada>>N;
    string nome, maiorNome;
    int produzida, vendida, diferenca;
    int maiorAtual=0;
    
    for (int i = N; i != 0; i--)
    {
        entrada>>nome;
        entrada>>produzida;
        entrada>>vendida;

        diferenca=produzida-vendida;

        if (diferenca>maiorAtual)
        {
            maiorAtual=diferenca;
            maiorNome=nome;
        }
        
        if (diferenca<50)
        {
            cout<<nome<<" "<<diferenca<<" BAIXO ESTOQUE"<<endl;
        }else{
            cout<<nome<<" "<<diferenca<<endl;
        }
        
    }
        cout<<maiorNome<<" "<<maiorAtual<<endl;
    return 0;
}