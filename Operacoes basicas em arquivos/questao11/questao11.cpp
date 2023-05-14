#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int horas, minutos;
    cin >> horas >> minutos;

    ofstream saida;
    saida.open("saida.txt");
    saida << horas*60 <<endl<< (horas*60)+minutos <<endl<< ((horas*60)+minutos)*60 <<endl;
    saida.close();

    return 0;
}