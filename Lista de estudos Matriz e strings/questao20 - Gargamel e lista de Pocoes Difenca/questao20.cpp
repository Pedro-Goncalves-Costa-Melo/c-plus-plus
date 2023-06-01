#include <iostream>

using namespace std;

int main(){

    int n1;
    cin>>n1;
    string lista1[n1];
    int cont=0;
    for (int i = 0; i < n1; i++)
    {
        cin>>lista1[i];
    }

    int n2;
    cin>>n2;
    string lista2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin>>lista2[i];
        
    }
    

    int cont2=0;
    for (int i = 0; i < n1; i++)
    {
        cont=0;
        for (int j = 0; j < n2; j++)
        {
            if (lista1[i]!=lista2[j])
            {
                cont++;
            }
            
        }
        if (cont==n2)
        {
            cout<<lista1[i]<<endl;
            cont2++;
        }
        
    }
    
    if (cont2==0)
    {
        cout<<"NADA"<<endl;
    }
    
    return 0;
}