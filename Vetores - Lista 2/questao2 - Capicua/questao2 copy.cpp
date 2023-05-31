#include <iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    int cont=0;
    bool continua=true;
    for (int i = 0; i < n/2 and continua; i++)
    {
        if (vet[i]==vet[n-1-i])
        {
            
            if(continua)
            {
                cout<<i<<" "<<vet[i]<<" "<<n-i-1<<" "<<vet[n-i-1]<<" ";
                cont++;
            }
        }
        else
        {
            continua=false;
        }
        
    }
    if (cont>=n/2)
    {
        cout<<endl<<"sim"<<endl;
    }
    else
    {
        cout<<endl<<"nao"<<endl;
    }
    


    
    

    return 0;
}