#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string nomeEntrada, nomeSaida;
    cin>>nomeEntrada>>nomeSaida;

    ifstream entrada(nomeEntrada);
    ofstream saida(nomeSaida);
    string palavraAtual;
    
    while (entrada>>palavraAtual)
    {
        saida<<palavraAtual;
    }
    


    return 0;
}