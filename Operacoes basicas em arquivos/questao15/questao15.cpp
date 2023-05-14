#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada;
    ofstream saida;
    int valorCompra, valorEntregue, troco;
    int troco20,troco10,troco5,troco2,troco1;

    entrada.open("entrada.txt");
    entrada >> valorCompra>>valorEntregue;
    entrada.close();

    troco=valorCompra-valorEntregue;

    troco20=troco/20;
    troco10=(troco%20)/10;
    troco5=((troco%20)%10)/5;
    troco2=(((troco%20)%10)%5)/2;
    troco1=(((troco%20)%10)%5)%2;

    saida.open("saida.txt");
    saida<<troco20<<endl<<troco10<<endl<<troco5<<endl<<troco2<<endl<<troco1<<endl;
    saida.close();

    return 0;
}