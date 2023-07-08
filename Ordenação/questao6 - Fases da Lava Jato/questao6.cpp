/*A Operação Lava Java deflagrada pela Polícia Federal em 2014 tem descoberto inúmeros casos de corrupção envolvendo políticos, grandes empresários, doleiros, entre outros. A operação é dividida em fases e, geralmente, essas fases possuem um número e um nome.

Suponha que alguém criou um arquivo chamado fases.txt e colocou nele o número e o nome de várias das operações da Lava Jato. Faça um programa que leia esse arquivo e um número K da entrada padrão e mostre na saída padrão os nomes das K primeiras operações que aparecem no arquivo ordenadas de forma crescente pelo número da operação e as demais em ordem decrescente.

Seu programa deve usar o método SelectionSort e não pode fazer uso de vetores auxiliares.

Obs: considere que os nomes das operações não possuem espaços e que o valor de K é no mínimo zero e no máximo o número de operações presentes no arquivo.

Entradas:

Arquivo fases.txt contendo em cada linha um número e um nome de uma fase da Lava Jato.
Um número K, sendo 0 <= K <= número de operações existentes no arquivo.
Saídas:

Os nomes das K primeiras operações do arquivo em ordem crescente de número (um em cada linha).
Os nomes operações restantes do arquivo em ordem decrescente de número (um em cada linha).
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

JuizoFinal
Xepa
Abismo
RestaUm
Acaraje
Pixuleco
QuePaisEhEsse*/

#include <iostream>
#include <fstream>

using namespace std;

struct Fase
{
    int numero;
    string nome;
};

void OrdenaCrescente(Fase vet[], int tam)
{
    for (int i = 0; i < tam-1; i++)
    {
        int menor=i;
        for (int j = i+1; j < tam; j++)
        {
            if (vet[j].numero<vet[menor].numero)
            {
                menor=j;
            }
            
        }
        swap(vet[menor],vet[i]);
    }
    
}
void OrdenaDecrescente(Fase vet[], int tam, int tam2)
{
    for (int i = tam; i < tam2; i++)
    {
        int maior=i;
        for (int j = i+1; j < tam2; j++)
        {
            if (vet[j].numero>vet[maior].numero)
            {
                maior=j;
            }
            
        }

        swap(vet[maior], vet[i]);
        
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

    OrdenaCrescente(vet,k);
    OrdenaDecrescente(vet,k,i);
    
    for (int j = 0; j < i; j++)
    {
        cout<<vet[j].nome<<endl;
    }
    
    return 0;
}