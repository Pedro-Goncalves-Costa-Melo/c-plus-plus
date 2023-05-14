#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    float salario, compra1, compra2,soma;
    ifstream entrada;

    entrada.open("entrada.txt");
    entrada >> salario>>compra1 >>compra2;
    entrada.close();

    soma=(compra1*1.0038)+(compra2*1.0038);

    cout << salario-soma;


    return 0;
}