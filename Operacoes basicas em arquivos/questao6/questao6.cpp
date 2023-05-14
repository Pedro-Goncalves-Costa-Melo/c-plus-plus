#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c, d, e, f, g, h;
    ifstream entrada;
    ofstream saida;

    entrada.open("dados.txt");
    entrada >>a>>b>>c>>d>>e>>f>>g>>h;
    entrada.close();

    saida.open("media.txt");
    saida << (a+b+c+d+e+f+g+h)/8 <<endl;
    saida.close();

    return 0;
}