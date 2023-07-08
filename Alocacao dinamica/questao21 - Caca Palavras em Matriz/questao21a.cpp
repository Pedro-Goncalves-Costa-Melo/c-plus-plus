#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int n;
    cin >> n;
    char **matriz = new char *[n];
    for (int i = 0; i < n; i++)
    {
        matriz[i] = new char[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int m;
    cin >> m;
    string *palavras = new string[m];
    for (int i = 0; i < m; i++)
    {
        cin >> palavras[m];
    }

    // int cont = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     int tam = palavras[i].length();
    //     for (int j = 0; j < n; j++)
    //     {
    //         for (int k = 0; k < n; k++)
    //         {
    //             if (matriz[j][k] == palavras[i][0])
    //             {
    //                 int o = k + 1;
    //                 for (int l = 1; l < tam; l++)
    //                 {
    //                     if (matriz[j][o] == palavras[0][l])
    //                     {
    //                         cont++;
    //                     }
    //                     o++;
    //                 }
    //                 if ( cont == tam)
    //                 {
    //                     cout << "ACHEI" << palavras[i] << endl;
    //                 }
    //             }
    //         }
    //     }
    // }

    return 0;
}