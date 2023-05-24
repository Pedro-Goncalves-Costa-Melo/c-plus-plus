#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");

    //Se o arquivo abrir
    if (entrada)
    {

        //Pegando os valores de entrada do arquivo
        int n;
        entrada>>n;
        int vet[n];
        for (int i = 0; i < n; i++)
        {
            entrada>>vet[i];
        }
        
        //Delimitando qual a quantidade de vezes que um numero deve aparecer para ser considerado moda
        int repeticoes=0;
        int MaiorNumeroDeRepeticoes=1;
        for (int i = 0; i < n; i++)
        {
            repeticoes=1;
            for (int j = i+1; j < n; j++)
            {
                if (vet[i]==vet[j])
                {
                    repeticoes++;
                }
                
                if (repeticoes>MaiorNumeroDeRepeticoes)
                {
                    MaiorNumeroDeRepeticoes=repeticoes;
                }
                
            }
            
        }

        //Teste 1
        //cout<<"Maior Numero de Repeticoes: "<<MaiorNumeroDeRepeticoes<<endl;
        
        //Agora, com o maior numero de repeticoes entre os números, verificamos quantos números se repetem essa quantidade
        int QuantasModas=0;
        for (int i = 0; i < n; i++)
        {
            repeticoes=1;
            for (int j = i+1; j < n; j++)
            {
                if (vet[i]==vet[j])
                {
                    repeticoes++;
                }
                
            }
            if (repeticoes==MaiorNumeroDeRepeticoes)
            {
                QuantasModas++;
            }
        }

        //Teste 2
        //cout<<"Quantas Numeros sao modas: " <<QuantasModas<<endl;

        //Descobrindo quais são as modas. Declarando todos os elementos do vetModas como 0;
        int vetModas[n] = {0};

        for (int i = 0; i < n; i++)
        {
            repeticoes=1;
            for (int j = i+1; j < n; j++)
            {
                if (vet[i]==vet[j])
                {
                    repeticoes++;
                }
                
            }
            if (repeticoes==MaiorNumeroDeRepeticoes)
            {
                vetModas[i]=vet[i];
            }
        }
        
        //Imprimindo a quantidade de Modas
        saida<<QuantasModas<<endl;
        

        //Imprimindo todas as modas
        for (int i = 0; i < n; i++)
        {
            if (vetModas[i]!=0)
            {
                saida<<vetModas[i]<<" ";
            }
            
        }
        

        //Se o arquivo de entrada não abrir
    }


    return 0;
}