#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    ifstream entrada;
    float profundidade, altura, largura, densidade;

    entrada.open("entrada.txt");
    entrada >>profundidade>>altura>>largura>>densidade;
    entrada.close();

    cout <<setprecision(1)<<fixed<< profundidade*altura*largura*densidade;

    return 0;
}