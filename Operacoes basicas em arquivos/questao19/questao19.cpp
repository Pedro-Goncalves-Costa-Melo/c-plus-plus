#include <iostream>
#include <fstream>

using namespace std;

int main (){
    ifstream entrada;
    ofstream saida;
    int miliS,horas,min;
    double seg;

    entrada.open("tempo.txt");
    entrada >> miliS;
    entrada.close();

    horas = miliS/1000/3600;
    min = (miliS/1000/60)-(horas*60);
    seg = ((double)miliS/1000.0) - (horas*3600) - (min*60);

    saida.open("horario.txt");
    saida << horas<<":"<<min<<":"<<seg<<endl;
    saida.close();

    return 0;
}