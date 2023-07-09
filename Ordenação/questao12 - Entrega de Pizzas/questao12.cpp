/*
Uma pizzaria precisa entregar mais pizzas que estava planejando. Entretanto, para agilizar as entregas, seu motoboy atenderá somente os N clientes mais próximos da pizzaria. Como saída, o programa deverá retornar a soma do valor das pizzas nos N clientes mais próximos da pizzaria.

Lembre: N é somente uma porção de clientes de um total de clientes que serão fornecidos na entrada.

Para cada cliente, a pizzaria possui os seguintes dados (usar um registro):

Nome do cliente (string)
Coordenada x do cliente (inteiro)
Coordenada y do cliente (inteiro)
Distância da pizzaria (inteiro)
Valor da pizza (real) .
Para cada cliente, deverá ser criado um registro com os dados acima, e a ordenação deverá ser feita usando o algoritmo InsertionSort. Não haverá clientes com distância repetida.

Dica: A distância entre dois pontos pode ser calculada por: sqrt [(x1-x2)^2 + (y1-y2)^2]

Entradas:

Número de clientes que serão atendidos
Coordenada x da pizzaria
Coordenada y da pizzaria
Número total de clientes
Nome cliente 1
Coordenada x do cliente 1
Coordenada y do cliente 1
Valor da pizza do cliente 1
Nome cliente 2
Coordenada x do cliente 2
Coordenada y do cliente 2
Valor da pizza do cliente 2
...
Saídas :

Soma do valor das pizzas dos N clientes mais próximos da pizzaria
Exemplo de Entrada:

2
5
5
3
Joao
10
5
22.50
Lucas
15
30
32.00
Maria
20
10
21.00
Exemplo de Saída:

43.50
*/

#include <iostream>
#include <cmath>

using namespace std;
struct cliente
{
    string nome;
    int x;
    int y;
    int distancia;
    float valor;
};

void InsertionSort(cliente vet[], int tam)
{
    for (int i = 1; i < tam; i++)
    {
        cliente aux = vet[i];
        int j = i - 1;
        while (j >= 0 and aux.distancia < vet[j].distancia)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = aux;
    }
}
int main()
{
    int atendimentos;
    cin >> atendimentos;

    int coordenadaX, coordenadaY;
    cin >> coordenadaX >> coordenadaY;

    int n;
    cin >> n;
    cliente vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].nome;
        cin >> vet[i].x;
        cin >> vet[i].y;
        cin >> vet[i].valor;

        vet[i].distancia = sqrt(pow((coordenadaX - vet[i].x), 2) + pow((coordenadaY - vet[i].y), 2));
    }

    InsertionSort(vet, n);

    // for (int i = 0; i < atendimentos; i++)
    // {
    //     cout << vet[i].distancia << " ";
    // }
    // cout << endl;
    float media=0;
    for (int i = 0; i < atendimentos; i++)
    {
        media+=vet[i].valor;
    }

    cout<<media<<endl;

    return 0;
}