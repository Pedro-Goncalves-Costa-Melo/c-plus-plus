#include <iostream>

using namespace std;

int main(){
    
    //Declarando Vetores A e B com 10 espaços
    float vetA[10], vetB[10];

    //Pegando os valores de A;
    for (int i = 0; i < 10; i++)
    {
        cin>>vetA[i];
    }

    //Pegando os valores de B
    for (int i = 0; i < 10; i++)
    {
        cin>>vetB[i];
    }

    //Pegando maior e segundo maior valor do vetor A e atribuindo às suas respectivas variáveis
    float maiorA, segundoMaiorA;
    if (vetA[0]>vetA[1])
    {
        maiorA=vetA[0];
        segundoMaiorA=vetA[1];
    }else 
    {
        maiorA=vetA[1];
        segundoMaiorA=vetA[0];
    }

    //Pegando maior e segundo maior valor do vetor B e atribuindo às suas respectivas variáveis
    float maiorB, segundoMaiorB;
    if (vetB[0]>vetB[1])
    {
        maiorB=vetB[0];
        segundoMaiorB=vetB[1];
    }else 
    {
        maiorB=vetB[1];
        segundoMaiorB=vetB[0];
    }

    //Declarando o vetor C e atribuindo seus valores como a media entre o primeiro valor de A e o ultimo de B
    float vetC[10];
    for (int i = 0; i < 10; i++)
    {
        vetC[i]=(vetA[i]+vetB[9-i])/2;
    }
    
    //Exibindo na tela o vetor C inteiro
    for (int i = 0; i < 10; i++)
    {
        cout<<vetC[i]<<endl;
    }
    cout<<endl;

    //Atribuindo o maior e segundo maior valor de A corretamente. Economizando testes, inicializando "i" como 2, ja que os valores do vetA[0] e vetA[1] ja foram atribuídos.
    for (int i = 2; i < 10; i++)
    {
        if (vetA[i]>maiorA)
        {
            segundoMaiorA=maiorA;
            maiorA=vetA[i];
        }else if (vetA[i]>segundoMaiorA)
        {
            segundoMaiorA=vetA[i];
        }
    }
    cout<<maiorA<<endl<<segundoMaiorA<<endl;
    cout<<endl;
    //Atribuindo o maior e segundo maior valor de B corretamente. Economizando testes, inicializando "i" como 2, ja que os valores do vetB[0] e vetB[1] ja foram atribuídos.
    for (int i = 2; i < 10; i++)
    {
        if (vetB[i]>maiorB)
        {
            segundoMaiorB=maiorB;
            maiorB=vetB[i];
        }else if (vetB[i]>segundoMaiorB)
        {
            segundoMaiorB=vetB[i];
        }
    }
    cout<<maiorB<<endl<<segundoMaiorB<<endl;

    return 0;
}