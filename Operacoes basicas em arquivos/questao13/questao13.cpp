#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int quantia,cem,cinquenta,dez;
    ofstream saida;

    cin >>quantia;

    cem=quantia/100;
    cinquenta=(quantia%100)/50;
    dez= ((quantia%100)%50)/10;

    saida.open("saque.txt");
    saida <<cem<<endl<<cinquenta<<endl<<dez;
    saida.close();
    return 0;
}
