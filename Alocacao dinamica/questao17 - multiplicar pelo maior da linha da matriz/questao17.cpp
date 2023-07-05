#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    double **matriz = new double *[n];

    for (int i = 0; i < n; i++)
    {
        matriz[i] = new double[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        double maiorDaLinha = matriz[i][0];

        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] < 0)
            {
                matriz[i][j] *= -1;

                if (matriz[i][j] > maiorDaLinha)
                {
                    maiorDaLinha = matriz[i][j];
                }

                matriz[i][j] *= -1;
            }
            else
            {
                if (matriz[i][j] > maiorDaLinha)
                {
                    maiorDaLinha = matriz[i][j];
                }
            }
        }

        for (int j = 0; j < m; j++)
        {
            matriz[i][j] *= maiorDaLinha;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matriz[i];
    }

    delete[] matriz;
}