#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    string vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    char letra;
    cin>>letra;
    int cont=n;
    bool continua=true;
    for (int i = 0; i < n; i++)
    {
        continua=true;
        for (unsigned j = 0; j < vet[i].length() and continua; j++)
        {
            if (vet[i][j]==letra)
            {
                cont--;
                continua=false;
            }
            
        }
        
    }
    cout<<cont<<endl;


    return 0;
}