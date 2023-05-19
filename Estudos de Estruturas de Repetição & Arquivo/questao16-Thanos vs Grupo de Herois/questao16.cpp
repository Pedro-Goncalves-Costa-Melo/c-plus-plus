#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream entrada("heroi.txt");
    
    int energia, perda;
    int cont = 0;

    if (entrada)
    {
        while (entrada>>energia and entrada>>perda)
        {
            while (energia>0)
            {
                energia-=perda;
                cont++;
            }
            
        }
        cout<<cont<<endl;

















    }else
        cout<<"NAO FOI POSSIVEL ABRIR O ARQUIVO"<<endl;
    return 0;
}