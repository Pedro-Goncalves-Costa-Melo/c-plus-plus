#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *vet = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    bool sim = true;
    int i = 0;

    if (n == 0)
    {
        sim = false;
    }

    if (n == 1)
    {
        cout << 0 << " " << vet[0];
    }
    else
    {
        while (i < n - 1 and sim)
        {
            n--;
            if (vet[i] != vet[n])
            {
                sim = false;
            }
            else
            {
                if (vet[i] == vet[n])
                {
                    cout << i << " ";
                    cout << vet[i] << " ";
                    cout << n << " ";
                    cout << vet[n] << " ";
                }
            }
            i++;
        }
    }

    
    if (sim)
        cout <<endl<< "sim"<<endl;
    else
        cout << "nao"<<endl;

    delete[] vet;

    return 0;
}