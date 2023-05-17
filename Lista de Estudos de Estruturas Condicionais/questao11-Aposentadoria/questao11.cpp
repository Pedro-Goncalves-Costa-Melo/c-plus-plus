#include <iostream>

using namespace std;

int main()
{

    bool genero;
    cin >> genero;

    int idade;
    cin >> idade;

    float anosTrabalho;
    cin >> anosTrabalho;

    float anosRestantes;

    if (genero)
    //Calculo para Homem
    {
        if (anosTrabalho<=20)
        {
            cout<<65<<endl;
        }else{

            anosRestantes = (35 - anosTrabalho)*1.3;
            cout<<anosRestantes+idade<<endl;
        }
    }
    else
    //Calculo para Mulher
    {
        if (anosTrabalho<=15)
        {
            cout<<62<<endl;
        }else{

            anosRestantes = (30 - anosTrabalho)*1.3;
            cout<<anosRestantes+idade<<endl;
        }
        
    }

    return 0;
}