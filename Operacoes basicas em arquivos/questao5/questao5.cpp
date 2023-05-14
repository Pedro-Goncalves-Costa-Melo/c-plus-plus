#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int N1, P1, N2, P2, N3, P3;
    float soma;
    ifstream ArqvIn;
    ofstream ArqvOut;

    ArqvIn.open("notas.txt");
    ArqvIn >>N1>>P1>>N2>>P2>>N3>>P3;
    ArqvIn.close();

    soma = (float)((N1*P1) + (N2*P2) + (N3*P3))/(P1+P2+P3);

    ArqvOut.open("final.txt");
    ArqvOut << setprecision(2) << fixed << soma <<endl;
    ArqvOut.close();

    return 0;
}