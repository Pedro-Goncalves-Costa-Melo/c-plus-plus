#include <iostream>

using namespace std;

int main(){

    unsigned n;
    cin>>n;
    string palavra;
    int soma=0;
    for (unsigned i = 0; i < n; i++)
    {
        const int UMPRIMO = 13;
        const int M = 10;
        long hash = 0;
        cin>>palavra;

        for (unsigned j = 0; j < palavra.size(); j++) 
        {
            hash = (UMPRIMO * hash + palavra[j]) % M;   
        }
        cout<<hash<<" ";
        soma+=hash;
    }
    cout<<soma<<endl;
    

    

    return 0;
}