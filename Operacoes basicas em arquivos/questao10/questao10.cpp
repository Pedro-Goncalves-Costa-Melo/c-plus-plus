#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream entrada;
    ofstream saida;
    float cent, metros;

    entrada.open("entrada.txt");
    entrada >> cent >> metros;
    entrada.close();

    saida.open("degraus.txt");
    saida << setprecision(2) << fixed << ceil((metros*100)/cent) << endl;


    return 0;
}