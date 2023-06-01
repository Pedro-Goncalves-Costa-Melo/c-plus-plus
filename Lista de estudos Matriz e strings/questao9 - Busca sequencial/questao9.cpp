#include <iostream>

using namespace std;

int main(){

    string textoBase;
    cin>>textoBase;
    string textoAlvo;
    cin>>textoAlvo;
    int indice=-1;
    unsigned cont=0;
    bool stop=false;
    for (unsigned i = 0; i < textoBase.length() and !stop; i++)
    {
        if (textoBase[i]==textoAlvo[0])
        {
            for (unsigned j = 0; j < textoAlvo.length() and !stop; j++)
            {
                if (textoAlvo[j]==textoBase[j+i])
                {
                    cont++;
                }
                
            }
            if (cont==textoAlvo.length())
            {
                indice=i;
                stop=true;
            }
            
            cont=0;
        }
        
    }
    
    if (indice==-1)
    {
        cout<<-1<<endl;
    }
    else
    cout<<indice<<endl;

    return 0;
}