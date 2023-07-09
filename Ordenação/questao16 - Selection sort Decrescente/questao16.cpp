/*Implemente uma variação do algoritmo de ordenação Selection Sort para que os elementos do vetor sejam ordenados em ordem decrescente. Dessa forma, deve-se procurar o maior valor de um vetor e trocá-lo com o que estiver na primeira posição do vetor. Em seguida, procurar o segundo maior valor e trocá-lo com o que estiver na segunda posição do vetor. Assim sucessivamente, até que o vetor esteja ordenado.

Os elementos do vetor devem ser impressos após cada troca de valor.

Entradas:

Tamanho do vetor que será ordenado.
Vários números inteiros que serão ordenados.
Saídas:

Os elementos do vetor a cada passo do algoritmo.
Exemplo de Entrada:

5
2 3 1 5 7
Exemplo de Saída:

7 3 1 5 2
7 5 1 3 2
7 5 3 1 2
7 5 3 2 1*/

#include <iostream>

using namespace std;

void ImprimeVetor(int vet[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}
void selectionSort(int vet[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vet[j] > vet[menor])
            {
                menor = j;
            }
        }
        swap(vet[i], vet[menor]);
        ImprimeVetor(vet,n);
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

    selectionSort(vet,n);

    return 0;
}