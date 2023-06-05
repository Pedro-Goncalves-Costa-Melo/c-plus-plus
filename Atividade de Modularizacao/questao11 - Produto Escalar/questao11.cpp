#include <iostream>

using namespace std;


float calculo(float vet1[], float vet2[], float soma, int tam)
{

    soma=0;
    for (int i = 0; i < tam; i++)
    {
        soma+=(vet1[i]*vet2[i]);
    }
    

    return soma;
}

int main(){


    int n;
    cin>>n;
    float vet1[n];
    float vet2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>vet2[i];
    }
    float soma=0;

    cout<<calculo(vet1,vet2,soma,n)<<endl;

    return 0;
}