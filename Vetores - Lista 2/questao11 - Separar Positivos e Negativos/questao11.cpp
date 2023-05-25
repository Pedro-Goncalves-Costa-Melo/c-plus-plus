#include <iostream>

using namespace std;

int main(){

    int vet[8];
    int vetPosi[8]={-1,-1,-1,-1,-1,-1,-1,-1};
    int vetNeg[8]={1,1,1,1,1,1,1,1};
    for (int i = 0; i < 8; i++)
    {
        cin>>vet[i];
        
        if (vet[i]>=0)
        {
            vetPosi[i]=vet[i];
        }else
        {
            vetNeg[i]=vet[i];
        }
        
    }

    for (int i = 0; i < 8; i++)
    {
        if (vetPosi[i]>=0)
        {
            cout<<vetPosi[i]<<" ";
        }
        
    }
    cout<<endl;
    for (int i = 0; i < 8; i++)
    {
        if (vetNeg[i]<0)
        {
            cout<<vetNeg[i]<<" ";
        }
        
    }
    cout<<endl;

    return 0;
}