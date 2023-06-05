#include <iostream>

using namespace std;


int soma(int vet[], int tam, int vetResp[])
{
    bool continua=true;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vet[i]+vet[j]==tam and continua)
            {
                vetResp[0]=vet[i];
                vetResp[1]=vet[j];
                continua=false;
            }
            
        }
        
    }
    


    return 0;
}

int main(){

    int n;
    cin>>n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    int vetResp[2];

    soma(vet,n,vetResp);

    if (vetResp[0]+vetResp[1]==n)
    {
        cout<<vetResp[0]<<" "<<vetResp[1]<<endl;
    }
    else 
        cout<<"Nao existe soma valida"<<endl;
    
    return 0;
}