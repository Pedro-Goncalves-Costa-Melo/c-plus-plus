#include <iostream>

using namespace std;

void mensagem(string vetPalavras[], int vetIndices[], int tamIndices)
{

    for (int i = 0; i < tamIndices; i++)
    {
        cout << vetPalavras[vetIndices[i]]<<" ";
    }
}

int main()
{

    int n;
    cin >> n;
    string vetPalavras[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetPalavras[i];
    }

    int m;
    cin >> m;
    int vetIndices[m];
    for (int i = 0; i < m; i++)
    {
        cin >> vetIndices[i];
    }

    mensagem(vetPalavras,vetIndices,m);
    cout<<endl;

    return 0;
}