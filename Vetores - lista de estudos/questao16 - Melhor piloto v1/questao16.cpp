#include <iostream>

using namespace std;

int main(){

    int qtsMedicoes;
    cin>>qtsMedicoes;
    string nome1;
    cin>>nome1;
    float vet1[qtsMedicoes];
    for (int i = 0; i < qtsMedicoes; i++)
    {
        cin>>vet1[i];
    }
    string nome2;
    cin>>nome2;
    float vet2[qtsMedicoes];
    for (int i = 0; i < qtsMedicoes; i++)
    {
        cin>>vet2[i];
    }
    
    for (int i = 0; i < qtsMedicoes; i++)
    {
        if (vet1[i]>vet2[i])
        {
            cout<<nome2<<" "<<vet2[i]<<endl;
        }else
        {
            cout<<nome1<<" "<<vet1[i]<<endl;

        }
        
    }
    



    return 0;
}
