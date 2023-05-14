#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    ifstream entrada;
    ofstream saida;
    int m2,quantidade;
    float preco;

    entrada.open("entrada.txt");
    entrada >> m2 >> preco;
    entrada.close();

    quantidade=ceil((float) m2/(18*3));

    saida.open("saida.txt");
    saida <<setprecision(2)<<fixed<< quantidade<<endl<<quantidade*preco<<endl;
    saida.close();

    return 0;
}