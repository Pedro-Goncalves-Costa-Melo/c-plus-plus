/* Dado um arquivo com vários valores, requisitando o numero de vetores e dando a entrada de valores por arquivo, devolver a maior moda. */

#include <iostream>
#include <fstream>

using namespace std;

int main(){


    string nomeArqv;
    cout<<endl<<"Esse codigo so funciona com numeros inteiros e tem capacidade de ate 100 numeros"<<endl;
    cout<<"informe o nome do arquivo onde estao os valores"<<endl;
    cin>>nomeArqv;

    ifstream entrada(nomeArqv);

    if (entrada)
    {
        //Declarando todos os 100 elementos do vetor como -1;
        int vet[100];
        for (int i = 0; i < 100; i++)
        {
            vet[i]=-1;
        }


        //Atribuindo Valores do Arquivo para o Vetor;
        int Tamanhovet=0;
        int p=0;
        while (entrada>>vet[p])
        {
            p++;
            Tamanhovet++;
        }
        
        
        //Descobrindo qual a quantidade de Vezes que um número deve repetir para ser considerado Moda
        int repeticoesModa=0;
        for (int i = 0; i < Tamanhovet; i++)
        {
            int cont=0;
            for (int j = 0; j < Tamanhovet; j++)
            {
                if (vet[i]!=-1 and vet[i]==vet[j])
                {
                    cont++;
                }
                
            }
            if (cont>repeticoesModa)
            {
                repeticoesModa=cont;
            }
            
        }

        //Descobrindo quais numeros são moda
        int cont2=0;
        int vetModas[Tamanhovet]={0};
        for (int i = 0; i < Tamanhovet; i++)
        {
            cont2=0;
            for (int j = 0; j < Tamanhovet; j++)
            {
                if (vet[i]!=-1 and vet[i]==vet[j])
                {
                    cont2++;
                }
            }
            
            if (cont2==repeticoesModa)
            {
                vetModas[i]=vet[i];
            }
            
            
        }


        //Definindo qual a maior moda
        int maiorModa=0;
        for (int i = 0; i < Tamanhovet; i++)
        {
            if (vetModas[i]>maiorModa)
            {
                maiorModa=vetModas[i];
            }
            
        }
        
         
        

        cout<<"A maior moda entre esses numeros e: "<<maiorModa<<endl;
    } 
        //Se não for possivel abrir o arquivo
    else
        cout<<"!!ERRO!! NAO FOI POSSIVEL ABRIR O ARQUIVO DE ENTRADA !!ERRO!!"<<endl;
    return 0;
}