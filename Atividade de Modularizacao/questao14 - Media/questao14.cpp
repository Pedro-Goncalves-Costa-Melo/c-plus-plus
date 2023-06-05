#include <iostream>

using namespace std;

int calculoMedia(float vet[], float& media, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        media+=vet[i];
    }
    media/=tam;

    for (int i = 0; i < tam; i++)
    {
        if (vet[i]<=media)
        {
            vet[i]*=media;
        }
        
    }
    return 0;
}

int main(){

    int n;
    cin>>n;
    float vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    float media=0;

    calculoMedia(vet,media,n);
    for (int i = 0; i < n; i++)
    {
        cout<<vet[i]<<" ";
    }
    

    return 0;
}