#include <iostream>

using namespace std;

void Max2(float vet[], int tamanho, float& A, float& B)
{
    
    
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i]>A)
        {
            B=A;
            A=vet[i];
        }else if (vet[i]>B)
        {
            B=vet[i];
        }
        
        
    }
    
}
int main(){

    int tam;
    cin>>tam;
    float vet[tam];
    for (int i = 0; i < tam; i++)
    {
        cin>>vet[i];
    }
    
    float A;
    float B;
    
    Max2(vet,tam,A,B);
    
    cout<<A<<" "<<B<<endl;
    return 0;
}