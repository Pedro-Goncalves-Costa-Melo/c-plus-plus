#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float larg, comp, area, watt;
    ofstream saida;

    cin >> larg >>comp;
    area=larg*comp;
    watt=area*18;

    saida.open("potencia.txt");
    saida <<setprecision(1)<<fixed<<area<<"m2"<<endl<<watt<<"W"<<endl;
    saida.close();

    return 0;
}