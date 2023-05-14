#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    ifstream entrada;
    ofstream saida;
    float total,convite;

    entrada.open("teatro.txt");
    entrada >> total >> convite;
    entrada.close();

    saida.open("convite.txt");
    saida << ceil(total/convite);
    saida.close();

    cout << ceil(total/convite) <<endl;
    
    return 0;
}