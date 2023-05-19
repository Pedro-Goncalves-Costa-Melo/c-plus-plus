#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string NomeArquivoEntrada;
    cin>>NomeArquivoEntrada;
    ifstream entrada(NomeArquivoEntrada);
    int numeros;
    bool naoPrimo=true;
    int menor, segundoMenor;
    int soma=0;
    int primeiroNumero, segundoNumero;

    //Régua para o menor e segundo menor
    entrada>>primeiroNumero>>segundoNumero;
    //Declarando o menor e o segundo menor número com "Régua";
    if (primeiroNumero>segundoNumero)
    {
        menor=segundoNumero;
        segundoMenor=primeiroNumero;
        soma+=segundoNumero;
        soma+=primeiroNumero;
    }else
    {
        menor=primeiroNumero;
        segundoMenor=segundoNumero;
        soma+=segundoNumero;
        soma+=primeiroNumero;
    }
    
    
    /*Da entrada no valor "Numeros", adiciona ele na soma total, testa se "Numeros" é um valor primo e verifica o menor número*/
    while (naoPrimo)
    {

        entrada>>numeros;
        int cont=0;
        //Conferindo qual o menor número;
        if (numeros<menor)
        {
            segundoMenor=menor;
            menor=numeros;
        }else if (numeros<segundoMenor)
        {
            segundoMenor=numeros;
        }

        //Adiciona o valor de "Numeros" à soma;
        soma+=numeros;
        
        //Confere se é um valor primo
        for (int i = 2; i < numeros; i++)
        {
            if (numeros%i==0)
            {
                cont++;
            }
            
        }
        if (cont>0)
        {
            naoPrimo=true;
        }else{
            naoPrimo=false;
        }

    }
    string nomeArquivoSaida;
    entrada>>nomeArquivoSaida;
    ofstream saida(nomeArquivoSaida);

    saida<<menor<<" "<<segundoMenor<<" "<<soma-(menor+segundoMenor)<<endl;

    return 0;
}