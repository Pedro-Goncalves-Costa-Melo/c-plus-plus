#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int *vet1;
    int *vet2;
    vet1 = new int[n];
    vet2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vet2[i];
    }

    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vet1[i] == vet2[j])
            {
                cont++;
            }
        }
    }

    if (cont == n)
        cout << "IGUAIS" << endl;
    else
        cout << "DIFERENTES" << endl;

    delete[] vet1;
    delete[] vet2;
    
    return 0;
}