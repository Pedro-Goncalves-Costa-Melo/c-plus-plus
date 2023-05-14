#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada;
    ofstream saida;
    int N, p1,p2,p3;
    cin >> N;

    entrada.open("chaves.txt");
    entrada >>p1>>p2>>p3;
    entrada.close();

    saida.open("codigo.txt");
    saida <<N%p1<<endl<<N%p2<<endl<<N%p3<<endl;


    return 0;
}