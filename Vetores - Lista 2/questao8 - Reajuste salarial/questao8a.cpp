#include <iostream>

using namespace std;

int main(){

    //Declarando os vetores
    string nomes[5];
    int anosServico[5];
    float salario[5];

    //Pegando os dados dos vetores
    for (size_t i = 0; i < 5; i++)
    {
        cin>>nomes[i];  
    }
    
    for (size_t i = 0; i < 5; i++)
    {
        cin>>salario[i];
    }
    
    for (size_t i = 0; i < 5; i++)
    {
        cin>>anosServico[i];
    }
    

    //Verifica se alguem vai recer reajuste e se alguem não vai receber reajuste
    int recebeAjuste=0;
    int naoRecebeAjuste=0;
    for(int i=0; i<5; i++)
    {
        if (salario[i]<=400)
        {
            recebeAjuste++;
        }
        else if (anosServico[i]>=5)
        {
            recebeAjuste++;
        }
        else
        {
            naoRecebeAjuste++;
        }
        
    }
    

    //Imprime "SEM REAJUSTE" e se alguem não for receber reajuste imprime o nome
    cout<<"SEM REAJUSTE: ";
    if (naoRecebeAjuste!=0)
    {
        for (int i = 0; i < 5; i++)
        {
            if (salario[i]>400 and anosServico[i]<5)
            {
                cout<<endl<<nomes[i];
            }
            
        }
        
    }
    cout<<endl;
    


    //Imprime "COM REAJUSTE:" e se alguem for receber reajuste, imprime o nome
    cout<<endl<<"COM REAJUSTE:";
    if (recebeAjuste!=0)
    {
        for (int i = 0; i < 5; i++)
        {
            if (salario[i]<=400 and anosServico[i]>=5)
            {
                cout<<endl<<nomes[i]<<" "<<salario[i]*1.35;
            }
            else if (salario[i]<=400)
            {
                cout<<endl<<nomes[i]<<" "<<salario[i]*1.15;
            }
            else if (anosServico[i]>=5)
            {
                cout<<endl<<nomes[i]<<" "<<salario[i]*1.25;
            }
            
            
            
        }
        
    }
    

    

    return 0;
}