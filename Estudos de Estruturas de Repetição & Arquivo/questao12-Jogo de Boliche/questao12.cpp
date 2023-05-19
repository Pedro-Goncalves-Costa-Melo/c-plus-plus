#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string J1, J2;
    ifstream entrada("boliche.txt");
    int cont1=0, cont2=0;

    while (entrada>>J1 and entrada>>J2)
    {
        if (J1=="VERDE")
        {
            cont1++;
        }
        if (J2=="VERDE")
        {
            cont2++;
        }
        
    }
    if (cont1>cont2)
    {
        cout<<"Jogador 1 é o ganhador da aposta"<<endl;
    }else{
        cout<<"Jogador 2 é o ganhador da aposta"<<endl;
    }
    

    return 0;
}