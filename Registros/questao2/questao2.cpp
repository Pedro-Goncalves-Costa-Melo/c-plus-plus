#include <iostream>

using namespace std;

struct Idade
{
    int dia;
    int mes;
    int ano;
};
struct Pessoa
{
    string nome;
    Idade Data;
};

int main()
{

    int n;
    cin >> n;
    Pessoa vetPessoa[n];

    int indice;
    int menor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vetPessoa[i].nome;
        cin >> vetPessoa[i].Data.dia;
        cin >> vetPessoa[i].Data.mes;
        cin >> vetPessoa[i].Data.ano;
    }

    menor += vetPessoa[0].Data.dia;
    menor += (vetPessoa[0].Data.mes * 30);
    menor += (vetPessoa[0].Data.ano * 365);
    indice = 0;

    int aux = 0;
    for (int i = 1; i < n; i++)
    {
        aux = 0;
        aux +=vetPessoa[i].Data.dia;
        aux += vetPessoa[i].Data.mes * 30;
        aux += vetPessoa[i].Data.ano * 365;

        if (menor > aux)
        {
            menor = aux;
            indice = i;
        }
    }

    cout << vetPessoa[indice].nome;
    return 0;
}