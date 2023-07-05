#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    float *vet;
    vet = new float[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    int contMaior = 0;
    int contMenor = 0;
    int maior, menor;
    for (int i = 0; i < n; i++)
    {
        contMaior=0;
        contMenor=0;
        for (int j = 0; j < n; j++)
        {
            if (vet[i]<vet[j])
            {
                contMenor++;
            }
            
            if (vet[i]>vet[j])
            {
                contMaior++;
            }
            
        }
        if (contMaior==n-2)
        {
            maior=i;
        }
        if (contMenor==n-2)
        {
            menor=i;
        }
        
        
    }

    
    float *vetResp;
    vetResp=new float[n-2];
    int p=0;
    for (int i = 0; i < n; i++)
    {
        if (i!=maior && i !=menor)
        {
            vetResp[p]=vet[i];
            p++;
        }
        
        
    }
    for (int i = 0; i < n-2; i++)
    {
        cout<<vetResp[i]<<endl;
    }
    

    return 0;
}