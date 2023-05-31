#include <iostream>

using namespace std;

int main(){

    int vet[15];

    for (int i = 0; i < 15; i++)
    {
        cin>>vet[i];
    }
    
    int cont=0;
    for (int i = 14; i > 0; i--)
    {
        if (vet[i]%vet[0]==0 and vet[i]!=0)
        {
            cout<<vet[i]<<" ";
            cont++;
        }
        
    }

    if (cont==0)
    {
        cout<<-1<<endl;
    }
    




    return 0;
}