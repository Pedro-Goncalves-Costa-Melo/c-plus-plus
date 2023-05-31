#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    string vet[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    char letra;
    cin>>letra;
    int cont=0;
    int contMaior=0;
    int indice;
    for (int i = 0; i < n; i++)
    {
        cont=0;
        for (unsigned j = 0; j < vet[i].length(); j++)
        {
            if (vet[i][j]==letra)
            {
                cont++;
            }
            if (cont>=contMaior)
            {
                contMaior=cont;
                indice=i;
            }
            

        }
        
    }
    cout<<vet[indice]<<endl;


    return 0;
}