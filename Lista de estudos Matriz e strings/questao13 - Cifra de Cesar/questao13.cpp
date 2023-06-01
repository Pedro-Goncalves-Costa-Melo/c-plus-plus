#include <iostream>

using namespace std;

int main(){

    string frase;
    getline(cin,frase);
    char a, b;
    cin>>a>>b;

    for (unsigned i = 0; i < frase.length(); i++)
    {
        if (frase[i]==a)
        {
            frase[i]=b;
        }
        
    }
    
    for (unsigned i = 0; i < frase.length(); i++)
    {
        cout<<frase[i];
    }
    

    return 0;
}