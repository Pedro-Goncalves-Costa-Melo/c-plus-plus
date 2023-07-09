/*Mario é um grande fã de futebol e por isso decidiu realizar um torneio com times amadores de sua cidade, ficou decidido que todos os time jogariam entre si onde uma vitória daria 3 pontos empate 1 ponto e derrota 0 pontos, ao final do torneio o time vencedor seria aquele com maior número de pontos, caso houvesse empate seria escolhido o time com maior número de vitórias, persistindo o empate a escolha seria feita pelo time com maior saldo de gols (considere que não existirão times com saldo de gols iguais), Mario no entanto não ordenou a tabela do campeonato durante a competição e agora pede a você que crie um programa que a ordene e informe sua ordem correta.

Só é permitido usar um dos seguintes métodos: Insertion sort, Selection sort ou Shell sort.

Entradas:

Quantidade de times que participaram da competição.
vetor de registros representando os times contendo os campos de nome do time (cadeia de caracteres), pontos que o time fez no decorrer da competição (número inteiro), número de vitórias (número inteiro) e saldo de gols (número inteiro).
Saídas:

O programa deve ordenar o vetor dos times modo que o time com mais pontos apareça primeiro seguido do segundo com mais pontos e assim por diante, caso ocorra empate no número de pontos seu programa deve ordenar os times empatados pelo número de vitórias, se o empate ainda existir o programa deve ordenar pelo saldo de gols.
Exemplo de Entrada:

5
DesertorFC 9 3 10
CarrascoFC 13 4 7
Campinais 13 4 9
Machado 11 3 10
RealSport 1 0 -4
Exemplo de Saída:

Campinais 13 4 9
CarrascoFC 13 4 7
Machado 11 3 10
DesertorFC 9 3 10
RealSport 1 0 -4*/

#include <iostream>

using namespace std;

struct Times
{
    string nome;
    int pontos;
    int vitorias;
    int SG;
};

void ordena(Times vet[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int maior = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vet[j].pontos > vet[maior].pontos)
            {
                maior = j;
            }
            else if (vet[j].pontos == vet[maior].pontos)
            {
                if (vet[j].vitorias > vet[maior].vitorias)
                {
                    maior = j;
                }
                else if (vet[j].vitorias == vet[maior].vitorias)
                {
                    if (vet[j].SG > vet[maior].SG)
                    {
                        maior = j;
                    }
                }
            }
        }
        swap(vet[i], vet[maior]);
    }
}

int main()
{

    int n;
    cin >> n;
    Times vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].nome;
        cin >> vet[i].pontos;
        cin >> vet[i].vitorias;
        cin >> vet[i].SG;
    }
    ordena(vet, n);
    for (int i = 0; i < n; i++)
    {

        cout << vet[i].nome << " ";
        cout << vet[i].pontos << " ";
        cout << vet[i].vitorias << " ";
        cout << vet[i].SG;
        cout<<endl;
    }

    return 0;
}