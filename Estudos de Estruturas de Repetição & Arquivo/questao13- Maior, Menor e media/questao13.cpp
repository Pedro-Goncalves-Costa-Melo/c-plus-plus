#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int soma=0, menor, maior, valor;
    ifstream entrada("entrada.txt");

    entrada>>valor;
    maior=valor;
    menor=valor;
    soma+=valor;

    int cont=1;

    while (entrada>>valor)
    {
        if (valor<menor)
        {
            menor=valor;
        }
        if (valor>maior)
        {
            maior=valor;
        }
        cont++;
        soma+=valor;
        
    }
    float media;
    media=(float)soma/cont;

    cout<<maior<<endl<<menor<<endl<<media<<endl;



    return 0;
}