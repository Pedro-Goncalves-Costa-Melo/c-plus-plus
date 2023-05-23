#include <iostream>

using namespace std;

int main(){

    int vet[15];
    for (int i = 0; i < 15; i++)
    {
        cin>>vet[i];
    }
    int maior=vet[0];
    for (int i = 1; i < 14; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
        }
        
    }
    for (int i = 0; i < 15; i++)
    {
        cout<<vet[i]/maior<<" ";
    }
    


    return 0;
}