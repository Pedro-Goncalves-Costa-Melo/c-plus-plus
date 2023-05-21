#include <iostream>

using namespace std;

int main(){

    //Pega todos os 10 valores e aloca no vetor principal;
    int vet[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>vet[i];
    }
    
    int cont2=0;
    int cont3=0;

    //Conta quantos numeros do vetor principal são divisiveis por 2 e por 3, para determinar o tamanho do vet2 e do vet3
    for (int i = 0; i < 10; i++)
    {
        if (vet[i]%2==0)
        {
            cont2++;
        }
        if (vet[i]%3==0)
        {
            cont3++;
        }
        
    }

    int vet2[cont2], vet3[cont3];
    int contDoVet2 =0, contDoVet3 =0;
    
    //Aloca os valores divisiveis por 2 e por 3 em seus respectivos locais, no vet2 e no vet3.
    for (int i = 0; i < 10; i++)
    {
        if (vet[i]%2==0)
        {
            vet2[contDoVet2]=vet[i];
            contDoVet2++;
        }

        if (vet[i]%3==0)
        {
            vet3[contDoVet3]=vet[i];
            contDoVet3++;
        }
    }
    
    int maior2=vet2[0];
    int maior3=vet3[0];

    //Verifica se o maior2 realmente é o maior valor divisivel por 2 no vet2
    for (int i = 1; i < contDoVet2; i++)
    {
        if (vet2[i]>maior2)
        {
            maior2=vet2[i];
        }
        
    }
    
    //Verifica se o maior3 realmente é o maior valor divisivel por 3 no vet3
    for (int i = 0; i < contDoVet3; i++)
    {
        if (vet3[i]>maior3)
        {
            maior3=vet3[i];
        }
        
    }

    //Imprime os valores do Vet2 e o maior2
    for (int i = 0; i < contDoVet2; i++)
    {
        cout<<vet2[i]<<" ";
    }
    cout<<endl<<maior2<<endl;
    for (int i = 0; i < contDoVet3; i++)
    {
        cout<<vet3[i]<<" ";
    }
    cout<<endl<<maior3<<endl;

    return 0;
}