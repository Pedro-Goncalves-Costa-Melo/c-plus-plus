#include <iostream>

using namespace std;

int main(){

    //Pego os caracteres do vetGabarito
    char vetGabarito[10];
    char vetAluno1[10];
    char vetAluno2[10];

    for (int i = 0; i < 10; i++)
    {
        cin>>vetGabarito[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin>>vetAluno1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin>>vetAluno2[i];
    }
    

    int contAluno1=0;
    int contAluno2=0;

    for (int i = 0; i < 10; i++)
    {
        if (vetAluno1[i]==vetGabarito[i])
        {
            contAluno1++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetAluno2[i]==vetGabarito[i])
        {
            contAluno2++;
        }
    }
    
    if (contAluno1>=6)
    {
        cout<<contAluno1<<endl<<"APROVADO"<<endl;
    }else{
        cout<<contAluno1<<endl<<"REPROVADO"<<endl;
    }

    if (contAluno2>=6)
    {
        cout<<contAluno2<<endl<<"APROVADO"<<endl;
    }else{
        cout<<contAluno2<<endl<<"REPROVADO"<<endl;
    }
    

    return 0;
}