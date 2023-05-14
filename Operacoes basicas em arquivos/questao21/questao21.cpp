#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream saida;
    float In;
    int grau, min, seg;

    cin >> In;
    grau = (int)In/1;
    min = ((In-grau)*60)/1;
    seg = ((((In-grau)*60)-min)*60)/1;

    saida.open("coordenadas.txt");
    saida <<grau<<endl<<min<<endl<<seg;
    saida.close();
    
    return 0;
}