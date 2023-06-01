#include <iostream>

using namespace std;

int main(){

    string frase;
    getline(cin,frase);

    bool continua=true;
    unsigned cont=0;
    for (unsigned i = 0; i < frase.length() and continua; i++)
    {
        cont=0;
        for (unsigned j = 0; j < frase.length() and continua; j++)
        {
            if (frase[i]!=frase[j] and i!=j)
            {
                cont++;
            }
            
        }
        
        if (cont==frase.length()-1)
        {
            cout<<frase[i]<<endl;
            continua=false;
        }
        
    }
    

    return 0;
}