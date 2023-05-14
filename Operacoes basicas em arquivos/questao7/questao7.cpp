#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arqv1,arqv2;
    ofstream saida;
    string A1,A2,A3,P1,P2;

    cin>>A1;
    cin>>A2;
    cin>>A3;
    
    arqv1.open(A1);
    arqv1 >> P1;
    arqv1.close();

    arqv2.open(A2);
    arqv2 >> P2;
    arqv2.close();

    saida.open(A3);
    saida << P1 <<" "<< P2;
    saida.close();
    
    return 0;
}