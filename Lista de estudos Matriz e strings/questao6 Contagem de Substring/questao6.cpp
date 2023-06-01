#include <iostream>

using namespace std;

int main(){

    string textoMain;
    cin>>textoMain;
    string palavraAlvo;
    cin>>palavraAlvo;
    int aux;
    unsigned cont;
    int superCont=0;
    for (unsigned i = 0; i < textoMain.length(); i++)
    {
        
        if (textoMain[i]==palavraAlvo[0])
        {
            cont=0;
            aux=i;
            for (unsigned j = 0; j < palavraAlvo.length(); j++)
            {
                // cout<<"comparando "<<palavraAlvo[j]<<" com "<<textoMain[aux]<<endl;
                if (palavraAlvo[j]==textoMain[aux])
                {
                    cont++;
                }
                
                aux++;
            }
            
            if (cont==palavraAlvo.length())
            {
                superCont++;
            }
            
        }
        
    }
    
    cout<<superCont<<endl;

    return 0;
}