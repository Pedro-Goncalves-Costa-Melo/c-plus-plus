#include <iostream>


using namespace std;

struct funcionarios
{
    int matricula;
    string nome;
    float salario;
};

int main(){

    funcionarios vetFuncionario[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>vetFuncionario[i].matricula;
        cin>>vetFuncionario[i].nome;
        cin>>vetFuncionario[i].salario;
    }
    

    int matriculaAlvo;
    cin>>matriculaAlvo;
    int indice;
    for (int i = 0; i < 5; i++)
    {
        if (vetFuncionario[i].matricula==matriculaAlvo)
        {
            indice=i;
        }
        
    }
    
    float salarioAlvo;
    cin>>salarioAlvo;
    cout<<vetFuncionario[indice].nome<<endl;

    bool continua=true;

    //Ordenando o vetor por tamanho do salario
    while (continua)
    {
        int cont=0;
        for (int i = 0; i < 4; i++)
        {
            if (vetFuncionario[i].salario>vetFuncionario[i+1].salario)
            {
                float auxF=vetFuncionario[i].salario;
                vetFuncionario[i].salario=vetFuncionario[i+1].salario;
                vetFuncionario[i+1].salario=auxF;

                string AuxN = vetFuncionario[i].nome;
                vetFuncionario[i].nome=vetFuncionario[i+1].nome;
                vetFuncionario[i+1].nome=AuxN;

                int auxM = vetFuncionario[i].matricula;
                vetFuncionario[i].matricula=vetFuncionario[i+1].matricula;
                vetFuncionario[i+1].matricula=auxM;

                cont++;
            }
            
        }
        if (cont==0)
        {
            continua=false;
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (vetFuncionario[i].salario>=salarioAlvo)
        {
            cout<<vetFuncionario[i].nome<<endl;
        }
        
    }
    
    return 0;
}