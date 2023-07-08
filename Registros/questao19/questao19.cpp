#include <iostream>

using namespace std;

struct corredor
{
    int codigo;
    string nome;
    int idade;
    int peso;
    char sexo;
};

struct treino
{
    int dia;
    int codigoAtleta;
    float distancia;
    int minutos;
};

int main()
{

    int n;
    cin >> n;
    corredor vetCorredores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetCorredores[i].codigo;
        cin >> vetCorredores[i].nome;
        cin >> vetCorredores[i].idade;
        cin >> vetCorredores[i].peso;
        cin >> vetCorredores[i].sexo;
    }

    treino vetTreinos[50];
    bool ler = true;
    int k = 0;
    int dias;
    while (ler)
    {
        cin >> dias;
        if (dias == -1)
        {
            ler = false;
        }
        else
        {
            vetTreinos[k].dia = dias;
            cin >> vetTreinos[k].codigoAtleta;
            cin >> vetTreinos[k].distancia;
            cin >> vetTreinos[k].minutos;
            k++;
        }
    }
    // Termino da Leitura

    // Inicio do processamento de dados:
    int contMasc = 0;
    int MaiorIdadeMasc = 0;
    float distPercorrida = 0;
    int indiceIdade;
    for (int i = 0; i < n; i++)
    {
        // Verificar se tem Homem cadastrado
        if (vetCorredores[i].sexo == 'M')
        {
            contMasc++;
            if (MaiorIdadeMasc < vetCorredores[i].idade)
            {
                MaiorIdadeMasc = vetCorredores[i].idade;
                indiceIdade = i;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (vetCorredores[indiceIdade].codigo == vetTreinos[i].codigoAtleta)
        {
            distPercorrida += vetTreinos[i].distancia;
        }
    }

    // Primeiro Cout
    cout << vetCorredores[indiceIdade].nome << " " << distPercorrida << endl;

    int maisDias = 0;
    int cont=0;
    int indiceDias=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (vetTreinos[j].codigoAtleta == vetCorredores[i].codigo)
            {
                cont++;
            }
        }

        if (cont>maisDias)
        {
            indiceDias=i;
        }
        
    }

    cout<<vetCorredores[indiceDias].nome<<" "<<vetCorredores[indiceDias].idade<<endl;
    return 0;
}