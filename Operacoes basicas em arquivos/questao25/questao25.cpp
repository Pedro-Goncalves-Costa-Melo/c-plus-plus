#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream entrada;
    ofstream saida;
    float avista, prestacoes, totalA, prestacaoA, prestacaoN, totalN;

    entrada.open("venda.txt");
    entrada >> avista >>prestacoes;
    entrada.close();

    totalA=avista*1.1;
    prestacaoA=totalA/prestacoes;
    totalN=totalA*0.9;
    prestacaoN=totalN/prestacoes;

    saida.open("cliente.txt");
    saida <<setprecision(2)<<fixed<< totalA<<endl<<prestacaoA<<endl<<prestacaoN<<endl<<totalN<<endl;

    return 0;
}