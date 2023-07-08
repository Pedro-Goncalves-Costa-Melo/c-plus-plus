/*A Operação Lava Jato deflagrada pela Polícia Federal em 2014 tem descoberto inúmeros casos de corrupção envolvendo políticos, grandes empresários, doleiros, entre outros. A operação é dividida em fases e, geralmente, essas fases possuem um número e um nome.

Suponha que alguém criou um arquivo chamado fases.txt e colocou nele o número e o nome de várias das operações da Lava Jato. Faça um programa que leia esse arquivo e um número K da entrada padrão e mostre na saída padrão os nomes das K primeiras operações que aparecem no arquivo ordenadas de forma decrescente pelo número da operação e as demais em ordem crescente.

Seu programa deve usar o método InsertionSort e não pode fazer uso de vetores auxiliares.

Obs: considere que os nomes das operações não possuem espaços e que o valor de K é no mínimo zero e no máximo o número de operações presentes no arquivo.

Entradas:

Arquivo fases.txt contendo em cada linha um número e um nome de uma fase da Lava Jato.
Um número K, sendo 0 <= K <= número de operações existentes no arquivo.
Saídas:

Os nomes das K primeiras operações do arquivo em ordem decrescente de número (um em cada linha).
Os nomes operações restantes do arquivo em ordem crescente de número (um em cada linha).
Exemplo de Entrada (arquivo fases.txt):

33 RestaUm
7 JuizoFinal
31 Abismo
26 Xepa
10 QuePaisEhEsse
23 Acaraje
17 Pixuleco
Exemplo de Entrada (entrada padrão):

4
Exemplo de Saída:

RestaUm
Abismo
Xepa
JuizoFinal
QuePaisEhEsse
Pixuleco
Acaraje*/

#include <iostream>
#include <fstream>

using namespace std;

struct Fase
{
    int numero;
    string nome;
};

void OrdenaDecrescente(Fase vet[], int tam)
{
    for (int i = 1; i < tam; i++)
    {
        Fase aux = vet[i];
        int j = i - 1;
        while (j >= 0 && vet[j].numero < aux.numero)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = aux;
    }
}

void OrdenaCrescente(Fase vet[], int k, int tam)
{
    for (int i = k; i < tam; i++)
    {
        Fase aux = vet[i];
        int j = i - 1;
        while (j >=k && vet[j].numero > aux.numero)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = aux;
    }
}
int main()
{
    int k;
    Fase vet[100];
    ifstream entrada("fases.txt");
    int i = 0;
    while (!entrada.eof())
    {
        entrada >> vet[i].numero;
        entrada >> vet[i].nome;
        i++;
    }
    cin >> k;

    OrdenaDecrescente(vet, k);
    OrdenaCrescente(vet,k,i);
    
    for (int j = 0; j < i; j++)
    {
        cout<<vet[j].nome<<endl;
    }
    
    return 0;
}