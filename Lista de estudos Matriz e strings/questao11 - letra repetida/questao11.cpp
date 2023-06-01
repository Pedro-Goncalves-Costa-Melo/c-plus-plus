#include <iostream>

using namespace std;

int main(){

    string palavra;
    cin>>palavra;

    unsigned cont=0;
    char Letra;
    char indice;
    unsigned contGrande=0;
    for (unsigned i = 0; i < palavra.length(); i++)
    {
        for (unsigned j = 0; j < palavra.length(); j++)
        {
            if (palavra[j]==palavra[i])
            {
                cont++;
                indice =i;
            }
            
        }
        
        if (cont>contGrande)
        {
            contGrande=cont;
            Letra=palavra[indice];
        }
        
    }
    
    cout<<Letra<<endl;  

    return 0;
}