/*Implemente a seguinte variação do algoritmo de ordenação selection sort (ordem decrescente): Procurar o menor valor de um vetor e trocá-lo com o que estiver na última posição do vetor. Em seguida, procurar o segundo menor valor e trocá-lo com o que estiver na penúltima posição do vetor. Assim sucessivamente, até que o vetor esteja ordenado.

Não existe teste para verificar se um valor está trocado com ele mesmo. Veja no exemplo que nesta situação, o vetor é mesmo antes e depois da troca.

Dica: o algoritmo selection sort em sua variação original, descrito por descrição narrativa é assim:

1. Para cada índice válido do vetor (exceto o último):
   1.1 Atribuir ao índice do menor o valor de índice.
   1.2 Para cada índice seguinte à índice:
      1.2.1 Se o elemento na posição índice seguinte for
            menor que o elemento na posição índice do menor,
            então atribuir ao índice do menor o valor do índice seguinte.
   1.3 Trocar os elementos que estão nas posições: índice e índice do menor.
Entradas:

Tamanho do vetor que será ordenado.
Vários números inteiros que serão ordenados.
Saídas:

Os elementos do vetor a cada troca de valor.
Exemplo de entrada:

5
4 1 7 2 3
Exemplo de saída:

4 3 7 2 1
4 3 7 2 1
4 7 3 2 1
7 4 3 2 1
7 4 3 2 1 */

#include <iostream>

using namespace std;

void Impressao(int vet[], int tam)
{
    for (int j = 0; j < tam; j++)
    {
        cout << vet[j] << " ";
    }
    cout << endl;
}

void ordenacao(int vet[], int tam)
{
    for (int i = tam-1; i >=0; i--)
    {
        int PosicaoMenor = i;

        for (int j = i - 1; j >=0; j--)
        {
            if (vet[j] < vet[PosicaoMenor])
            {
                PosicaoMenor = j;
            }
        }
        swap(vet[i], vet[PosicaoMenor]);

        Impressao(vet,tam);
    }
}


int main()
{

    int n;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    ordenacao(vet,n);

    return 0;
}