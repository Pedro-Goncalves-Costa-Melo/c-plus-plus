/*1) Considerando 2 arquivos (a e b) ordenados, gerar um terceiro arquivo (c) somente com os itens do arquivo b que também estão no arquivo a. */

#include <iostream>
#include <fstream>
using namespace std;

int main(){


    ifstream entradaA("a.txt");
    ifstream entradaB("b.txt");
    ofstream saidaC("c.txt");

    if (entradaA and entradaB)
    {
        
        int i=0;
        int contA=0;
        string vetA[100];

        while (!entradaA.eof())
        {
            entradaA>>vetA[i];
            i++;
            contA++;
        }

        string vetB[100];
        i=0;
        while (!entradaB.eof())
        {
            entradaB>>vetB[i];
            i++;
        }
        
        for (int k = 0; k < contA; k++)
        {
            for (int j = 0; j < i; j++)
            {
                if (vetA[k]==vetB[j])
                {
                    saidaC<<vetA[k]<<endl;
                }
                
            }
            
        }
        cout<<"As palavras repetidas no arquivo 1 e 2 foram escritas no arquivo c.txt"<<endl;
    }else
        cout<<"NAO FOI POSSIVEL ABRIR O ARQUIVO DE ENTRADA"<<endl;
    
    
    
    

    
    return 0;
}