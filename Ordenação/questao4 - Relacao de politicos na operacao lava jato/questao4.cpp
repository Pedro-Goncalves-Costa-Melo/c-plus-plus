/*A Operação Lava Jato é considerada a maior investigação sobre corrupção já conduzida no Brasil. Inicialmente, ela começou investigando uma rede de doleiros que atuavam em vários Estados e descobriu no processo de investigação a existência de um amplo esquema de corrupção na Petrobras, esquema este envolvendo políticos de diferentes partidos e as maiores empreiteiras do país.

O juiz que está cuidando da atual fase da Lava Jato pediu sua ajuda para organizar algumas informações referentes ao processo. Ele te disse que possui um arquivo texto chamado relacao_desvios.txt que possui, em cada uma de suas linhas, o nome de um político envolvido no esquema de corrupção, seu partido e o valor em reais que o mesmo desviou dos cofres públicos. Sabendo que neste aquivo não há mais do que cem políticos diferentes e que cada político aparece em apenas uma linha do arquivo, faça um programa que leia os dados do arquivo e os ordene em ordem decrescente dos valores desviados. Seu programa deverá exibir no dispositivo de saída padrão os nomes de cada um dos políticos envolvidos no esquema corrupção, começando pelo que desviou a maior quantidade de dinheiro dos cofres públicos e terminando com aquele que desviou a menor quantia. Ao ordenar os dados, você deve escolher uma dentre as estratégias de ordenação a seguir: Bubble-Sort, Selection-Sort, Insert-Sort, Quick-Sort ou Merge-Sort. Assuma que não haverá espaços em branco no nome de um dado político qualquer ou em seu partido. Assuma também que não haverá dois políticos que desviaram exatamente a mesma quantia no esquema de corrupção.

Entradas (arquivo texto relacao_desvios.txt):

Sequência das informações sobre os desvios. Cada linha do arquivo contém, nesta ordem, o nome de um político, seu partido e o desvio realizado pelo político.
Saídas (dispositivo de saída padrão):

Sequência dos nomes dos políticos ordenada em ordem decrescente dos valores de desvio realizados.
Exemplo de Entrada (arquivo texto relacao_desvios.txt):

Macaco_Louco		Partido_Da_Mentira		420000.0
Joffrey_Baratheon 	Partido_Do_Furto		970000.0
Hannibal_Lecter		Partido_Engana_Povo	        109000.0
Darth_Vader		Partido_Do_Furto		973000.0
Paola_Bracho		Partido_Engana_Povo	        896000.0
Zeca_Urubu		Partido_Da_Mentira		234000.0
Montgomery_Burns	Partido_Da_Mentira		556000.0
Exemplo de Saída (dispositivo de saída padrão):

Darth_Vader
Joffrey_Baratheon
Paola_Bracho
Montgomery_Burns
Macaco_Louco
Zeca_Urubu
Hannibal_Lecter*/

#include <iostream>
#include <fstream>

using namespace std;

struct Dados
{
    string nome;
    float dinheiro;
    string partido;
};


void Selection(Dados vet[], int tam)
{

    for (int i = 0; i < tam-1; i++)
    {
        
        int maior=i;
        for (int j = i+1; j < tam; j++)
        {
            if (vet[maior].dinheiro<vet[j].dinheiro)
            {
                maior=j;
            }
            
        }

        swap(vet[i],vet[maior]);
        
    }
    

}

void impressao(Dados vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout<<vet[i].nome;
        cout<<endl;
    }
    
}
int main(){

    ifstream entrada("relacao_desvios.txt");

    int k=0;
    Dados vet[100];
    while (!entrada.eof())
    {
        entrada>>vet[k].nome;
        entrada>>vet[k].partido;
        entrada>>vet[k].dinheiro;
        k++;
    }

    Selection(vet,k);
    impressao(vet,k);    

    return 0;
}