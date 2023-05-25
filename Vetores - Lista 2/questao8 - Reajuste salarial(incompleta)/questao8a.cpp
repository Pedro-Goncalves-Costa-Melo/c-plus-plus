#include <iostream>

using namespace std;

int main(){

    //Declaração de Vetores
    string vetNomes[5];
    float vetSalarios[5];
    int vetAnos[5];


    //Entrada dos nomes
    for (int i = 0; i < 5; i++)
    {
        cin>>vetNomes[i];
    }
    

    //Entrada dos salarios e verificação se algum salario é menor ou igual a 400
    int RecebeAumento=0;
    int NaoRecebeAumento=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>vetSalarios[i];
        if(vetSalarios[i]<=400)
        {
            RecebeAumento++;
        }
        else
        {
            NaoRecebeAumento++;
        }
    }
    

    //Entrada do tempo de servico e verificação se algum tempo de servico é maior ou igual a 5 anos
    for (int i = 0; i < 5; i++)
    {
        cin>>vetAnos[i];
        if(vetAnos[i]>=5)
        {
            RecebeAumento++;
        }
        else
        {
            NaoRecebeAumento++;
        }
    }
    

    //Se alguem nao For Receber aumento de salário
    if (NaoRecebeAumento>0)
    {
        cout<<"SEM REAJUSTE:"<<endl;
        for (int i = 0; i < 5; i++)
        {
            if (vetSalarios[i]>400 and vetAnos[i]<5)
            {
                cout<<vetNomes[i]<<endl;
            }
            
        }
        cout<<endl;
    }
    

    //Se alguem for receber aumento de salário
    if (RecebeAumento>0)
    {
        cout<<"COM REAJUSTE:"<<endl;

        for (int i = 0; i < 5; i++)
        {
            if (vetSalarios[i]<=400 and vetAnos[i]>=5)
            {
                cout<<vetNomes[i]<<" "<<vetSalarios[i]*1.35<<endl;
            }
            else if (vetAnos[i]>=5)
            {
                cout<<vetNomes[i]<<" "<<vetSalarios[i]*1.25<<endl;
            }
            else if (vetSalarios[i]<=400)
            {
                cout<<vetNomes[i]<<" "<<vetSalarios[i]*1.15<<endl;
            }
            
        }
        
    }
    

    

    return 0;
}