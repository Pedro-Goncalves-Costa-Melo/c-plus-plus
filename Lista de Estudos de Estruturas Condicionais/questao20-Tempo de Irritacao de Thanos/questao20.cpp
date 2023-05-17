#include <iostream>

using namespace std;

int main(){

    int saidaHr, saidaMin, chegadaHr, chegadaMin;
    cin>>saidaHr>>saidaMin>>chegadaHr>>chegadaMin;

    int MinutosDeSaida, MinutosDeChegada;

    MinutosDeSaida=saidaHr*60+saidaMin;
    MinutosDeChegada = chegadaHr*60+chegadaMin;

    if (MinutosDeSaida<MinutosDeChegada)
    {
        cout<<MinutosDeChegada-MinutosDeSaida<<endl;
    }

    if (MinutosDeSaida>MinutosDeChegada)
    {
        chegadaHr=(chegadaHr-saidaHr)+23;
        chegadaMin=(chegadaMin-saidaMin)+60;
        saidaHr=0;
        saidaMin=0;

        cout<<chegadaHr*60+chegadaMin<<endl;
    }
    

    return 0;
}