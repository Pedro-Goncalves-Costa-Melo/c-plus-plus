#include <iostream>

using namespace std;

struct alunos
{
    string nome;
    string matricula;
    int nota;
};

int main()
{

    int n;
    cin >> n;
    alunos vetAlunos[n];
    float media = 0;

    int indices[n];
    int contAux = 0;
    for (int i = 0; i < n; i++)
    {
        indices[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> vetAlunos[i].matricula;
        cin >> vetAlunos[i].nome;
        cin >> vetAlunos[i].nota;

        media += vetAlunos[i].nota;

        if (vetAlunos[i].nota == 0)
        {
            indices[i] = i;
            contAux++;
        }
    }

    media /= n;
    cout << media << endl;

    if (contAux > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (indices[i] != -1)
            {
                cout << vetAlunos[i].matricula << endl;
            }
        }
    }
    else
        cout << endl;

    int contAux2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetAlunos[i].nota < media)
        {
            contAux2++;
        }
    }
    cout << (float)contAux2 / (float)n*(100) << "%" << endl;

    int maior = 0;
    for (int i = 0; i < n; i++)
    {
        if (maior < vetAlunos[i].nota)
        {
            maior = vetAlunos[i].nota;
        }
    }

    bool achou = false;
    for (int i = 0; i < n; i++)
    {
        if (vetAlunos[i].nota == maior and !achou)
        {
            cout << vetAlunos[i].nome << endl;
            achou = true;
        }
    }

    return 0;
}