#include <iostream>

using namespace std;

float media(float vet[], int quantidade)
{
    float media=0;
    for (int i = 0; i < quantidade; i++)
    {
        media+=vet[i];
    }

    media/=quantidade;
    return media;
}

int main(){

    int n;
    cin>>n;
    float vet[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>vet[i];
    }
    float diff;
    cin>>diff;
    float mediaValores;
    mediaValores=media(vet,n);
    cout<<mediaValores<<endl;

    for (int i = 0; i < n; i++)
    {
        if (vet[i]>mediaValores)
        {
            cout<<vet[i]-mediaValores<<" ";
        }
        else
        {
            cout<<mediaValores-vet[i]<<" ";
        }
        
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]-mediaValores<=diff and vet[i]-mediaValores>0)
        {
            cout<<vet[i]<<" ";
        }
        else if (mediaValores-vet[i]<=diff and mediaValores-vet[i]>0)
        {
            cout<<vet[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}