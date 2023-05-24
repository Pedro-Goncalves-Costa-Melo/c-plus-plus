#include <iostream>

using namespace std;

int main(){

    //Declaração de vetores para nomes, vendas por nome e porcentagem de comissão
    int totalVendas[10];
    float porcentagemVendas[10];
    string nomes[10];

    int quantidadeVendida=0;
    for (int i = 0; i < 10; i++)
    {

        //Entrada do nome, quantidade que esse nome vendeu e porcentagem de comissão;
        cin>>nomes[i];
        cin>>totalVendas[i];
        cin>>porcentagemVendas[i];


        //Atribui o vetor porcentagemVendas[] como sendo o valor monetario, e não a porcentagem;
        porcentagemVendas[i]=porcentagemVendas[i]*totalVendas[i];


        //Soma na quantidade de vendas as vendas do nome atual;
        quantidadeVendida+=totalVendas[i];
    }

    //Impressão do nome e valor que receberá de comissão;
    for (int i = 0; i < 10; i++)
    {
        cout<<nomes[i]<<" "<<porcentagemVendas[i]<<endl;
    }
    
    //Impressão da quantidade total vendida
    cout<<endl;
    cout<<quantidadeVendida<<endl;


    //Descobrir quem é o funcionario que mais ganhou
    float maisGanha=porcentagemVendas[0];
    for (int i = 1; i < 10; i++)
    {
        if (porcentagemVendas[i]>maisGanha)
        {
            maisGanha=porcentagemVendas[i];
        }
        
    }

    //Impressão do nome do funcionario que mais ganhou e a quantidade ganha
    for (int i = 0; i < 10; i++)
    {
        if (porcentagemVendas[i]==maisGanha)
        {
            cout<<nomes[i]<<" "<<porcentagemVendas[i]<<endl;
        }
        
    }
    
    

    return 0;
}