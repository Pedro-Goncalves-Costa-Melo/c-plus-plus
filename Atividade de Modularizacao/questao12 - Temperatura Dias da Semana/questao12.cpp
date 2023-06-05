#include <iostream>

using namespace std;

void calculos(float vet[], float vetResp[])
{

    for (int i = 1; i < 7; i++)
    {
        if (vetResp[0]>vet[i])
        {
            vetResp[0]=vet[i];
        }
        
    }
    
    for (int i = 0; i < 7; i++)
    {
        if (vetResp[1]<vet[i])
        {
            vetResp[1]=vet[i];
        }
        
    }
    
    for (int i = 0; i < 7; i++)
    {
        vetResp[2]+=vet[i];
    }
    vetResp[2]/=7;

    for (int i = 0; i < 7; i++)
    {
        if (vet[i]<vetResp[2])
        {
            vetResp[3]++;
        }
        
    }
    
}


int main(){

    float vet[7];
    float vetResp[4];
    for (int i = 0; i < 7; i++)
    {
        cin>>vet[i];
    }

    vetResp[0]=vet[0];
    vetResp[1]=vet[0];
    vetResp[2]=0;
    vetResp[3]=0;
    calculos(vet,vetResp);

    for (int i = 0; i < 4; i++)
    {
        cout<<vetResp[i]<<" ";
    }
    cout<<endl;
    return 0;
}