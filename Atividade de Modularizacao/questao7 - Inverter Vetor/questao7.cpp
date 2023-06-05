#include <iostream>

using namespace std;

void inverter(char vet[], int tam){
    char aux;
    for (int i = 0; i < tam/2; i++)
    {
        aux=vet[i];
        vet[i]=vet[tam-1-i];
        vet[tam-1-i]=aux;
    }

    for (int i = 0; i < tam; i++)
    {
        cout<<vet[i]<<" ";
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
    
    inverter(vet,n);
    cout<<endl;


}