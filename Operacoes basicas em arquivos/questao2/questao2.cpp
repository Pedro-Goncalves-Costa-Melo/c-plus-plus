#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string conteudo,nomeArqv;
    cin >> nomeArqv >> conteudo;

    ofstream Arqv_out;
    Arqv_out.open(nomeArqv);
    Arqv_out << conteudo << endl;
    Arqv_out.close();



    return 0;
}