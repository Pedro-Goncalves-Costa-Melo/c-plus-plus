#include <iostream>

using namespace std;

int main(){

    //Declara os elementos do vetor;
    float vet[12];
    for (int i = 0; i < 12; i++)
    {
        cin>>vet[i];
    }
    
    //Atribui maior e menor como sendo vet[0], e testa para ver qual é realmente o maior e o menor valor do vetor
    float maior=vet[0], menor=vet[0];
    for (int i = 1; i < 12; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
        }
        if (vet[i]<menor)
        {
            menor=vet[i];
        }
        
    }
    
    int indiceMenor, indiceMaior;
    for (int i = 0; i < 12; i++)
    {

        //Testa todos os valores do vetor, se esse valor for igual ao maior, declara o indice do maior como i;
        if (vet[i]==maior)
        {
            switch (i)
            {
            case 0:
                indiceMaior=0;
                break;
            case 1:
                indiceMaior=1;
                break;
            case 2:
                indiceMaior=2;
                break;
            case 3:
                indiceMaior=3;
                break;
            case 4:
                indiceMaior=4;
                break;
            case 5:
                indiceMaior=5;
                break;
            case 6:
                indiceMaior=6;
                break;
            case 7:
                indiceMaior=7;
                break;
            case 8:
                indiceMaior=8;
                break;
            case 9:
                indiceMaior=9;
                break;
            case 10:
                indiceMaior=10;
                break;
            case 11:
                indiceMaior=11;
                break;
            
            default:
                break;
            }
        }

        //Testa todos os valores do vetor, se esse valor for igual ao maior, declara o indice do maior como i;
        if (vet[i]==menor)
        {
            switch (i)
            {
            case 0:
                indiceMenor=0;
                break;
            case 1:
                indiceMenor=1;
                break;
            case 2:
                indiceMenor=2;
                break;
            case 3:
                indiceMenor=3;
                break;
            case 4:
                indiceMenor=4;
                break;
            case 5:
                indiceMenor=5;
                break;
            case 6:
                indiceMenor=6;
                break;
            case 7:
                indiceMenor=7;
                break;
            case 8:
                indiceMenor=8;
                break;
            case 9:
                indiceMenor=9;
                break;
            case 10:
                indiceMenor=10;
                break;
            case 11:
                indiceMenor=11;
                break;
            
            default:
                break;
            }
        }
        
    }
    

    //Realisa Impressão do mes mais quente
    for (int i = 0; i < 12; i++)
    {

        //Verifica se "i" é igual ao indice de maior, se sim, imprime o mes correspondente
        if (vet[i]==vet[indiceMaior])
        {
            switch (i)
            {
            case 0:
                cout<<"janeiro"<<endl;
                break;
            case 1:
                cout<<"fevereiro"<<endl;
                break;
            case 2:
                cout<<"marco"<<endl;
                break;
            case 3:
                cout<<"abril"<<endl;
                break;
            case 4:
                cout<<"maio"<<endl;
                break;
            case 5:
                cout<<"junho"<<endl;
                break;
            case 6:
                cout<<"julho"<<endl;
                break;
            case 7:
                cout<<"agosto"<<endl;
                break;
            case 8:
                cout<<"setembro"<<endl;
                break;
            case 9:
                cout<<"outubro"<<endl;
                break;
            case 10:
                cout<<"novembro"<<endl;
                break;
            case 11:
                cout<<"dezembro"<<endl;
                break;
            
            default:
                break;
            }
        }
        
    }
    
    
    //Realiza Impressão do mes mais frio
    for (int i = 0; i < 12; i++)
    {
        //Verifica se "i" é igual ao indice de menor, se sim, imprime o mes correspondente
        if (vet[i]==vet[indiceMenor])
        {
            switch (i)
            {
            case 0:
                cout<<"janeiro"<<endl;
                break;
            case 1:
                cout<<"fevereiro"<<endl;
                break;
            case 2:
                cout<<"marco"<<endl;
                break;
            case 3:
                cout<<"abril"<<endl;
                break;
            case 4:
                cout<<"maio"<<endl;
                break;
            case 5:
                cout<<"junho"<<endl;
                break;
            case 6:
                cout<<"julho"<<endl;
                break;
            case 7:
                cout<<"agosto"<<endl;
                break;
            case 8:
                cout<<"setembro"<<endl;
                break;
            case 9:
                cout<<"outubro"<<endl;
                break;
            case 10:
                cout<<"novembro"<<endl;
                break;
            case 11:
                cout<<"dezembro"<<endl;
                break;
            
            default:
                break;
            }
        }
        
    }
    

    return 0;
}