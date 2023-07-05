#include <iostream>
#include <cmath>

using namespace std;

struct pessoas
{
    float salario;
    int idade;
    int filhos;
};

int main(){

    int n;
    cin>>n;
    pessoas vetPessoas[n];
    float mediaSalario=0;
    float mediaFilhos=0;
    float maiorSalario=0;
    int cont1000=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vetPessoas[i].salario;
        cin>>vetPessoas[i].idade;
        cin>>vetPessoas[i].filhos;

        mediaSalario+=vetPessoas[i].salario;
        mediaFilhos+=vetPessoas[i].filhos;
        if (maiorSalario<vetPessoas[i].salario)
        {
            maiorSalario=vetPessoas[i].salario;
        }
        if (vetPessoas[i].salario>1000)
        {
            cont1000++;
        }
        

    }
    cout<<mediaSalario/n<<endl;
    cout<<mediaFilhos/n<<endl;
    cout<<maiorSalario<<endl;

    cout<<ceil((float)cont1000/(float)n*100)<<"%"<<endl;

    return 0;
}