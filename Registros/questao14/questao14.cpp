#include <iostream>
#include <iomanip>

using namespace std;

struct funcionario
{
    string nome;
    float v1;
    float v2;
    float v3;
    int soma;
};

int main()
{

    funcionario vetFuncionarios[3];
    for (int i = 0; i < 3; i++)
    {
        float soma = 0;
        cin >> vetFuncionarios[i].nome;
        cin >> vetFuncionarios[i].v1;
        soma += vetFuncionarios[i].v1;
        cin >> vetFuncionarios[i].v2;
        soma += vetFuncionarios[i].v2;
        cin >> vetFuncionarios[i].v3;
        soma += vetFuncionarios[i].v3;
        vetFuncionarios[i].soma = soma;
    }

    int maior = vetFuncionarios[0].soma;
    string NomeMaior = vetFuncionarios[0].nome;

    for (int i = 0; i < 3; i++)
    {
        if (vetFuncionarios[i].soma > maior)
        {
            maior = vetFuncionarios[i].soma;
            NomeMaior = vetFuncionarios[i].nome;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << vetFuncionarios[i].nome << " " << ((int)vetFuncionarios[i].soma / 100) << endl;
    }
    float total = vetFuncionarios[0].soma + vetFuncionarios[1].soma + vetFuncionarios[2].soma;

    cout << NomeMaior << endl;
    cout << total << endl;
    return 0;
}