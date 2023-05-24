#include <iostream>

using namespace std;

int main(){

    //Pegando elementos do vetA
    int a;
    cin>>a;
    int vetA[a];
    for (int i = 0; i < a; i++)
    {
        cin>>vetA[i];
    }
    
    //Pegando elemnetos do vetB
    int b;
    cin>>b;
    int vetB[b];
    for (int i = 0; i < b; i++)
    {
        cin>>vetB[i];
    }
    
    int c=a+b;
    //Declarando o vetor C e Preenchendo-o com os elementos de vetA e os de vetB
    int vetC[c];
    for (int i = 0; i < a; i++)
    {
        vetC[i]=vetA[i];
    }
    for (int i = 0; i < b; i++)
    {
        vetC[i+a]=vetB[i];
    }
    
    //Verificando se algum elemento de vetC está repetido, se sim, transforma aquele valor em 0;
    for (int i = 0; i < c; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            if (vetC[i]==vetC[j])
            {
                vetC[j]=0;
            }
            
        }
        
    }
    
    //Ordenando os valores do vetC
    int Aux;
    for (int i = 0; i < c; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            if (vetC[i]>vetC[j])
            {
                Aux=vetC[i];
                vetC[i]=vetC[j];
                vetC[j]=Aux;
            }
            
        }
        
    }
    
    for (int i = 0; i < c; i++)
    {
        if (vetC[i]!=0)
        {
            cout<<vetC[i]<<" ";
        }
    }
    
    
    

    
    return 0;
}