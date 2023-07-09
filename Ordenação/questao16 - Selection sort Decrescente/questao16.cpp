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