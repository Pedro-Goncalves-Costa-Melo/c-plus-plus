#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int vet[n];

    // pegando os Valores de vida dos inimigos
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    // Verificando se algum inimigo fica com vida<0
    int QuantosMorreram = 0;
    bool continua = true;
    int cont;
    while (continua)
    {

        //Reseta o contador para verificar se algum inimigo irá morrer nessa rodada
        cont=0;
        //dá 1 de dano em todos os inimigos
        for (int i = 0; i < n; i++)
        {
            vet[i] -= 1;
        }

        //verifica se tem algum inimigo com vida = 0, se algum inimigo morrer, a variavel "QuantosMorreram" é somada a essa quantidade, igualmente a variavel "cont"
        for (int i = 0; i < n; i++)
        {
            if (vet[i] == 0)
            {
                continua = true;
                QuantosMorreram++;
                cont++;
            }
        }
        //testa se algum inimigo morreu, se não, para de rodar o código
        if (cont==0)
        {
            continua=false;
        }
        
    }

    cout << QuantosMorreram << endl;

    return 0;
}