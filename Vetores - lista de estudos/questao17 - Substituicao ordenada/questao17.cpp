#include <iostream>

using namespace std;

int main()
{

    int vet[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> vet[i];
        while (vet[i] < 0)
        {
            cin >> vet[i];
        }
    }

    int menor = vet[0];
    for (int i = 0; i < 5; i++)
    {
        


        //esse if(true) é o "cout<<" completo
        if(true)
        {
            for (int j = 0; j < 5; j++)
            {
                cout<<vet[j]<<" ";
            }
            cout<<endl;
        }
    }
    

    return 0;
}