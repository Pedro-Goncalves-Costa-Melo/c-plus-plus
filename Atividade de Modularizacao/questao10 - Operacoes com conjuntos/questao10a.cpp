#include <iostream>

using namespace std;

int Uniao(int vetM[], int vetN[], int tamVetM, int tamVetN, int vetResposta[])
{
    for (int i = 0; i < tamVetN; i++)
    {
        int cont=0;
        for (int j = 0; j < tamVetM; j++)
        {
            if (vetN[i]!=vetM[j])
            {
                cont++;
            }
            
        }
        if (cont==tamVetM)
        {
            vetResposta[tamVetM+i]=vetN[i];
        }
        
    }
    
    return 0;
}
int main(){

    int m, n;
    cin>>m>>n;
    int vetM[m];
    int vetN[n];

    for (int i = 0; i < m; i++)
    {
        cin>>vetM[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>vetN[i];
    }
    
    int vetResposta[m+n];

    for (int i = 0; i < m; i++)
    {
        vetResposta[i]=vetM[i];
    }
    for (int i = 0; i < n; i++)
    {
        vetResposta[m+i]=-1;
    }
    
    Uniao(vetM,vetN,m,n,vetResposta);

    for (int i = 0; i < m+n; i++)
    {
        if (vetResposta[i]!=-1)
        {
            cout<<vetResposta[i]<<" ";
        }
        
    }
    cout<<endl;
    
    return  0;
}