#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int H;
    int voltas, horarios;
    ifstream entrada("magia.txt");

    entrada>>H;

    int cont =0;

    while (entrada>>horarios and entrada>> voltas)
    {
        if (horarios>H and horarios-voltas<=H)
        {
            cont++;
        }
        
    }
    cout<<cont<<endl;


    return 0;
}