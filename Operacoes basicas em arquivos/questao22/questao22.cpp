#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
    ofstream saida;
    float dinheiro, caixa, trufa, jujuba, hortela, bala, valorgasto;

    cin >>dinheiro;
    caixa = int(dinheiro/13.5);
    trufa = int((dinheiro-(caixa*13.5))/2.5);
    jujuba = int((dinheiro-(caixa*13.5)-(trufa*2.5))/1.5);
    hortela = int((dinheiro-(caixa*13.5)-(trufa*2.5)-(jujuba*1.5))/1);
    bala = int((dinheiro-(caixa*13.5)-(trufa*2.5)-(jujuba*1.5)-(hortela*1))/0.25);
    valorgasto =(caixa*13.5)+(trufa*2.5)+(jujuba*1.5)+(hortela*1)+(bala*0.25);

    saida.open("doces.txt");
    saida << valorgasto<<endl;
    saida << caixa<<endl;
    saida << trufa<<endl;
    saida << jujuba<<endl;
    saida << hortela<<endl;
    saida << bala <<endl;
    saida.close();

    return 0;
}