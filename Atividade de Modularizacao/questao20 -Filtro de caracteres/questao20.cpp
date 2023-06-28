#include <iostream>

using namespace std;

void filtro(char vet[], char antes[], char depois[], int tam, char alvo ){

    int a=0, d=0;
    for (int i = 0; i < tam; i++)
    {
        if (vet[i]<alvo)
        {
            antes[a]=vet[i];
            a++;
        }
        else if (vet[i]!=alvo)
        {
            depois[d]=vet[i];
            d++;
        }   
    }
    

}
int main(){

    int n;
    cin>>n;
    char vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    char alvo;
    cin>>alvo;
    
    int cont=0, cont2=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]<alvo)
        {
            cont++;
        }
        if (vet[i]==alvo)
        {
            cont2++;
        }
        
        
    }
    
    char Antes[cont];
    char Depois[n-cont-cont2];

    filtro(vet,Antes,Depois,n,alvo);
    for (int j = 0; j < cont; j++)
    {
        cout<<Antes[j]<<" ";
    }
    cout<<endl;
    for (int j = 0; j < n-cont-cont2; j++)
    {
        cout<<Depois[j]<<" ";
    }
    

    return 0;
}