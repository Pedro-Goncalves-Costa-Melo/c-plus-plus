#include <iostream>

using namespace std;

int main(){

    string P;
    cin>>P;
    int N;
    cin>>N;
    
    string vetPalavras[N];
    for (int i = 0; i < N; i++)
    {
        cin>>vetPalavras[i];
    }
    
    int cont=0;
    int maiorcont=0;
    int indice=0;
    for (int i = 0; i < N; i++)
    {
        cont=0;
        for (int j = 0; j < 5; j++)
        {
            if (vetPalavras[i][j]==P[j])
            {
                cont++;
            }

            if (maiorcont<=cont)
            {
                maiorcont=cont;
                indice=i;
            }
            
            
        }
        
    }
    cout<<vetPalavras[indice]<<endl;


    return 0;
}