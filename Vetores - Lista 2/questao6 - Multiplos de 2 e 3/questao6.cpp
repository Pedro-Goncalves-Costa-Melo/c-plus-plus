#include <iostream>

using namespace std;

int main(){

    //Pegando os valores do vetor
    int vet[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>vet[i];
    }
    


    //Testando se os valores do vetor são divisiveis por 2
    int cont2=0;
    for (int i = 0; i < 7; i++)
    {
        if (vet[i]%2==0)
        {
            cout<<vet[i]<<" ";
            cont2++;
        }
        
    }
    if (cont2==0)
    {
        cout<<0;
    }
    
    cout<<endl;


    //Testando se os valores do vetor sao divisiveis por 3
    int cont3=0;
    for (int i = 0; i < 7; i++)
    {
        if (vet[i]%3==0)
        {
            cout<<vet[i]<<" ";
            cont3++;
        }
        
    }
    if (cont3==0)
    {
        cout<<0;
    }
    cout<<endl;


    //Testando se os valores do vetor são divisiveis por  2 e por 3
    int cont23=0;
    for (int i = 0; i < 7; i++)
    {
        if (vet[i]%2==0 and vet[i]%3==0)
        {
            cout<<vet[i]<<" ";
            cont23++;
        }
        
    }
    if (cont23==0)
    {
        cout<<0;
    }
    
    cout<<endl;

    return 0;
}