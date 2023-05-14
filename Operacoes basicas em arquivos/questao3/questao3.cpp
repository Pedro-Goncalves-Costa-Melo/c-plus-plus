#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x1, y1, x2, y2, soma;

    ifstream ArqvIn;
    ArqvIn.open("entrada.txt");
    ArqvIn >> x1 >> y1 >> x2 >> y2;
    ArqvIn.close();

    soma = pow(x2-x1,2) + pow(y2-y1,2);
    cout << sqrt(soma) << endl;

    return 0;
}