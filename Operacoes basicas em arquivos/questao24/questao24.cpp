#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream entrada;
    ofstream saida;
    float fabrica, Pdistribuidor, Pimpostos, Ldistribuidor, impostos, preco;

    entrada.open("dados.txt");
    entrada >> fabrica>>Pdistribuidor>>Pimpostos;
    entrada.close();

    Ldistribuidor= fabrica*Pdistribuidor;
    impostos = fabrica*Pimpostos;
    preco = fabrica+impostos+Ldistribuidor;

    saida.open("custo.txt");
    saida <<setprecision(2)<<fixed<<Ldistribuidor<<endl<<impostos<<endl<<preco<<endl;
    saida.close();

    return 0;
}