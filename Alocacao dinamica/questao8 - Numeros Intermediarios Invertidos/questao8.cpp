#include <iostream>

using namespace std;

int main()
{

    //Leitura do tamanho do vetor;
    int n;
    cin >> n;


    //Declaração do tamanho do vetor e leitura dos dados;
    int *vet;
    vet = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }


    //Declaração de duas variáveis que serão utilizadas como limite para a impressão final;
    int limite1, limite2;
    cin >> limite1 >> limite2;


    //Declaração de uma variavel inteira que irá armazenar o indice do primeiro limite
    //Declaração de uma variavel booleana que indica se ja foi ou não encontrado esse limite;
    int indiceComeco;
    bool encontrouComeco = false;


    //Declaração da variavel"y" que sera utilizada como contador para o laço while;
    int y = 0;


    //Laço de Repetição que procura o indice do primeio limite, ao encontrar, interrompe a busca;
    while (encontrouComeco == false)
    {
        if (vet[y] == limite1 || vet[y] == limite2)
        {
            indiceComeco = y;
            encontrouComeco = true;
        }
        y++;
    }


    //Declaração de uma variavel inteira que irá armazenar o indice do segundo limite;
    //Declaração de uma variavel booleana que indica se ja foi ou não encontrado esse limite;
    int indiceFim;
    bool encontrouFim = false;


    //Declaração da variavel "y" como o indice do primeiro limite +1, para não fazer buscas desnecessárias e não correr o risco de atribuir o mesmo indice à variavel de inicio e de fim;
    y = indiceComeco + 1;

    //Laço de repetição que procura o indice do segundo limite;
    while (encontrouFim == false)
    {
        if (vet[y] == limite1 || vet[y] == limite2)
        {
            indiceFim = y;
            encontrouFim = true;
        }
        y++;
    }

    //Declara o tamanho do vetor resposta como sendo a quantidade de elementos entre o primeiro e o segundo indice;
    int tamResp = (indiceComeco-indiceFim-1);

    //Declaração de um vetor auxiliar que terá o tamanho necessário de elementos entre o primeiro e segundo indice;
    int *vetAux;
    vetAux=new int[tamResp];

    //Variavel que será usada para controlar aonde os elementos de vet serão inseridos em vetAux;
    int o=0;

    //Laco de Repetição que insere os valores necessarios de vet em vetAux;
    for (int i = indiceComeco+1; i < indiceFim; i++)
    {
        vetAux[o]=vet[i];
        o++;
    }
    
    //Laco de repeticao que inverte o vetor que sera usado na resposta (vetAux);
    for (int i = 0; i < o/2; i++)
    {
        int aux =vetAux[i];
        vetAux[i]=vetAux[o-i-1];
        vetAux[o-i-1]=aux;
    }

    for (int i = 0; i < o; i++)
    {
        cout<<vetAux[i]<<" ";
    }
    cout<<endl;
    
    delete[] vet;
    delete[]vetAux;
    
    return 0;
}