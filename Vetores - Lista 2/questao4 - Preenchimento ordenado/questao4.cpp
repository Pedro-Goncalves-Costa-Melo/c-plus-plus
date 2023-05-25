#include <iostream>

using namespace std;

int main (){

    int vet[8];
    int Aux=0;
    for (int i = 0; i < 8; i++)
    {
        cin>>vet[i];
        for (int j = 0; j < i; j++)
        {
            if (vet[i]<=vet[j])
            {
                Aux=vet[i];
                vet[i]=vet[j];
                vet[j]=Aux;
            }
            
        }
        
        
        for (int k = 0; k <= i; k++)
        {
            
        cout<<vet[k]<<" ";    
            
        }
        cout<<endl;
        
    }
    




    return 0;
}