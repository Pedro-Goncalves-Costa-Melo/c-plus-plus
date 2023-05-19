#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string NomeArqv, palavraChave, texto;
    int cont=0;

    cin>>NomeArqv>>palavraChave;
    
    ifstream entrada(NomeArqv);

    if(entrada){

        while (entrada>>texto)
        {
            
            if (texto==palavraChave)
            {
                cont++;
            }
                
        }
        
    }
    cout <<cont<<endl;
    return 0;
}