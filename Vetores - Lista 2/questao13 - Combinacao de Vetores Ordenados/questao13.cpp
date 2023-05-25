#include <iostream>

using namespace std;

int main(){

    //Declarando os vetores e pegando os valores de A e B;
    int vetA[5];
    int vetB[5];
    int vetC[10];

    for (int i = 0; i < 5; i++)
    {
        cin>>vetA[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin>>vetB[i];
    }
    

    //Colocando todos os menores valores no vetor A;
    int Aux=0;
    for (int i = 0; i < 5; i++)
    {
        for(int j=0; j<5; j++)
        if (vetA[i]>vetB[j])
        {
            Aux=vetA[i];
            vetA[i]=vetB[j];
            vetB[j]=Aux;
        }
        
    }
    
    //Ordenando o vetB
    int Aux2=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vetB[i]<vetB[j])
            {
                Aux2=vetB[i];
                vetB[i]=vetB[j];
                vetB[j]=Aux2;
                j--;
            }
            
        }
        
    }


    //                                        TESTE 1
    // cout<<"VetorA"<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vetA[i]<<" ";
    // }
    // cout<<endl<<"VetorB:"<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vetB[i]<<" ";
    // }
    


    //Declarando os Primeiros valores de vetC como vetA;
    for (int i = 0; i < 5; i++)
    {
        vetC[i]=vetA[i];
    }
    



    //                                     TESTE 2
    // cout<<"VetC: "<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vetC[i]<<" ";
    // }
    


    //Atribuindo os valores de vetB para VetC depois dos ja atribuidos por vetA
    for (int i = 0; i < 5; i++)
    {
        vetC[5+i]=vetB[i];
    }
    


    //                                 TESTE 3
    //cout<<"VetC: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vetC[i]<<" ";
    }
    


    return 0;
}