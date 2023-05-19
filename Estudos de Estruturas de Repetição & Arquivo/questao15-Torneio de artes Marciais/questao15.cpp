#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream entrada("dados.txt");
    int min, max, pontos;
    entrada>>min>>max;
    int cont=0;

    while (entrada>>pontos)
    {
        if (pontos>=min and pontos<=max)
        {
            cont++;
        }
        
    }
    cout<<cont<<endl;
    return 0;
}