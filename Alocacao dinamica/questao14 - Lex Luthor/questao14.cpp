#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    string *vet1 = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet1[i];
    }
    int m;
    cin>>m;
    string *vet2 = new string[m];
    for (int i = 0; i < m; i++)
    {
        cin>>vet2[i];
    }
    
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        vet[i]=-1;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vet1[i]==vet2[j])
            {
                vet[i]=1;
            }
        }
    }

    bool cont=false;

    for (int i = 0; i < n; i++)
    {
        if (vet[i]!=1)
        {
            cout<<vet1[i]<<endl;
            cont=true;
        }
        
    }
    if (!cont)
    {
        cout<<"NADA"<<endl;
    }
    
    
    return 0;
}