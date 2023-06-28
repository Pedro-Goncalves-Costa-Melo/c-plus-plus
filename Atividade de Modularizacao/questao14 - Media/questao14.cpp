#include <iostream>

using namespace std;

float Media(float vet[],int tam){

    float media=0;
    for (int i = 0; i < tam; i++)
    {
        media+=vet[i];
    }
    media/=tam;





    return media;
}
int main(){

    int n;
    cin>>n;
    float vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (vet[i]<=Media(vet,n))
        {
            cout<<vet[i]*Media(vet,n)<<" ";
        }else
        {
            cout<<vet[i]<<" ";
        }
        
    }
    cout<<endl;

    

    return 0;
}