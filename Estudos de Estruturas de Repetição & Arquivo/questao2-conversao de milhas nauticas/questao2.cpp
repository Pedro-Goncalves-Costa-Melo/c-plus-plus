#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    float distancia, velocidade, tempo;
    float distanciaM, previsaoDist;
    ifstream entrada("entrada.txt");

    while (entrada >> distancia)
    {
        entrada >> velocidade;
        entrada >> tempo;

        distanciaM = distancia / 1.852;

        previsaoDist = distanciaM + ((velocidade * tempo) / 1.852);

        cout << setprecision(2) << fixed << distanciaM << " " << previsaoDist << endl;
    }

    return 0;
}