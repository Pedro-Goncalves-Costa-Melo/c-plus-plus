/*
Modifique o Quick Sort para ordenar de forma crescente apenas os K primeiros elementos de um vetor de inteiros com tamanho N. Podendo K ser zero ou igual a N e o vetor conter elementos repetidos.

Entradas:

Tamanho do vetor.
Elementos do vetor .
O numero de elementos que se deseja ordenado, podendo ser menor ou igual ao tamanho do vetor, mas nunca maior .
Saídas:

O vetor com os K primeiros elementos ordenados seguido dos elementos não ordenados.
Exemplo de Entrada:

14
3 5 4 1 8 9 6 7 4 2 3 6 4 8
7
Exemplo de Saída:

1 3 4 5 6 8 9 7 4 2 3 6 4 8
*/

#include <iostream>

using namespace std;

void ImprimeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vet[i] << " ";
    }
}


void SelectionSort(int vet[], int tam)
{
    
    for (int i = 0; i < tam - 1; i++)
    {
        
        int menor = i;
        for (int j = i + 1; j < tam; j++)
        {
            
            if (vet[j] < vet[menor])
            {
                menor = j;
            }
        }
        swap(vet[menor], vet[i]);
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
    int k;
    cin >> k;
    SelectionSort(vet, k);
    ImprimeVetor(vet, n);

    return 0;
}