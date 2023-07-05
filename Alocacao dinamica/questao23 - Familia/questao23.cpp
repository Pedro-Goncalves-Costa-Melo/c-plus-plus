#include <iostream>

using namespace std;

struct Familia
{
    string sobrenome;
    int pai;
    int mae;
    int filho;
    bool igual;
    bool jaImprimiu;
};

int main()
{

    Familia *vet;
    vet = new Familia[3];

    int k = 0;
    int tam = 3;
    bool ler = true;
    // Le dados até que o sobrenome escrito seja "FIM";
    while (ler)
    {
        // Le o sobrenome da familia, se o codigo ler "FIM", ele não le o resto;
        cin >> vet[k].sobrenome;
        if (vet[k].sobrenome != "FIM")
        {
            cin >> vet[k].pai;
            cin >> vet[k].mae;
            cin >> vet[k].filho;
        }
        else
        {
            ler = false;
        }

        // Aumenta k, a variavel de controle do while
        k++;

        if (k % 3 == 0)
        {
            // Aumenta o tamanho do vetor e a variavel tam em +3;
            tam += 3;
            Familia *vetAux;
            vetAux = new Familia[tam];
            copy(vet, vet + k, vetAux);
            delete[] vet;
            vet = vetAux;
        }
    }

    for (int i = 0; i < k; i++)
    {
        vet[i].igual = false;
        vet[i].jaImprimiu = false;
    }

    // Imprime o tamanho do vetor toda vez q ele foi aumentado
    int cont = 0;
    for (int i = 0; i <= k; i++)
    {
        cont++;

        if (cont != 3 && cont % 3 == 0)
        {
            cout << cont << endl;
        }
    }

    int imprimiu=0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if ((i != j) && (vet[i].filho == vet[j].filho))
            {
                vet[i].igual = true;
                vet[j].igual = true;
            }
        }

        for (int l = 0; l < k; l++)
        {
            if ((vet[l].jaImprimiu == false) && (vet[l].igual == true))
            {
                cout << vet[l].sobrenome << endl;
                vet[l].jaImprimiu = true;
                imprimiu++;
            }
        }
    }

    if (imprimiu==0)
    {
        cout<<"NENHUM"<<endl;
    }
    
    return 0;
}