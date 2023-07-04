#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int *vet;
    vet = new int[n];

    int cont=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];

        if (vet[i]%2==0)
        {
            cout<<vet[i]<<" ";
            cont++;
        }
        
    }
    
    if (cont==0)
    {
        cout<<0<<endl;
    }
    else 
        cout<<endl;

    cont=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]%3==0)
        {
            cout<<vet[i]<<" ";
            cont++;
        }
        
    }
    if (cont==0)
    {
        cout<<0<<endl;
    }
    else 
        cout<<endl;

    cont=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]%2==0 && vet[i]%3==0)
        {
            cout<<vet[i]<<" ";
            cont++;
        }
        
    }
    
    if (cont==0)
    {
        cout<<0<<endl;
    }
    else    
        cout<<endl;

    

    delete[] vet;

    return 0;
}