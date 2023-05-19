#include <iostream> 
#include <fstream>

using namespace std;

int main(){

    ifstream entradaA("arquivoA.txt");
    ifstream entradaB("arquivoB.txt");
    ofstream saidaC("arquivoC.txt");
    
    string A, B;
    if (entradaA and entradaB)
    {
        while (entradaA>> A and entradaB>>B)
    {
        saidaC<<A<<" "<<B<<" ";
    }
    }else
    {
        cout<<"NAO FOI POSSIVEL ABRIR OS ARQUIVOS"<<endl;
    }
    
    
    
    


    return 0;
}