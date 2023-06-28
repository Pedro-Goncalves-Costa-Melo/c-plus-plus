#include <iostream>

using namespace std;

void Ipar_Par(int vet[], int vetPar[], int vetImpar[]){

    int p=0, y=0;
    for (int i = 0; i < 20; i++)
    {
        if (vet[i]%2==0)
        {
            vetPar[p]=vet[i];
            p++;
        }else
        {
            vetImpar[y]=vet[i];
            y++;
        }
        
    }
    
    
}
int main(){

    int vet[20];
    int contPar=0;
    for (int i = 0; i < 20; i++)
    {
        cin>>vet[i];
        if (vet[i]%2==0)
        {
            contPar++;
        }
        
    }
    int vetPar[contPar];
    int vetImpar[20-contPar];

    Ipar_Par(vet,vetPar,vetImpar);

    for (int i = 0; i < contPar; i++)
    {
        cout<<vetPar[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 20-contPar; i++)
    {
        cout<<vetImpar[i]<<" ";
    }
    cout<<endl;

    return 0;
}