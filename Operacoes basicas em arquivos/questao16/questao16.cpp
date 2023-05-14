#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main (){
    ifstream entrada;
    ofstream saida;
    float preco;

    entrada.open("valor.txt");
    entrada >> preco;    
    entrada.close();
    
    saida.open("opcoes.txt");
    saida <<setprecision(2)<<fixed<< preco * 0.92 <<endl<< preco/4 <<endl<< (preco*1.1)/10<<endl;
    saida.close();
    return 0;
}