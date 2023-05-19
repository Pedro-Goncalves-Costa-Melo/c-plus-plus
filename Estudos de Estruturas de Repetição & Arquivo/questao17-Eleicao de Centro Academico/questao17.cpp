#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    ifstream entrada("eleicao.txt");
    string nome1, nome2, local;
    int numero1, numero2;
    int cont1=0, cont2=0;

    entrada>>nome1;
    entrada>>nome2;

    while (entrada>>local and entrada>>numero1 and entrada>> numero2)
    {
        cont1+=numero1;
        cont2+=numero2;
    }
    
    float porcentagem;
    int totalVotos;
    totalVotos=cont1+cont2;

    if (cont1>cont2)
    {

        porcentagem=(float)cont1*100/totalVotos;
        cout<<setprecision(2)<<fixed<<nome1<<endl<<cont1<<endl<<porcentagem<<endl;

    }else
    {
        
        porcentagem=(float)cont2*100/totalVotos;
        cout<<setprecision(2)<<fixed<<nome2<<endl<<cont2<<endl<<porcentagem<<endl;

    }
    


    return  0;
}