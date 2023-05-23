#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int vet[n];

    int soma1=0, soma2=0, soma3=0, soma4=0, soma5=0, somaGeral=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
        switch (vet[i])
        {
        case 1:
            soma1++;
            somaGeral++;
            break;
        case 2:
            soma2++;
            somaGeral++;
            break;
        case 3:
            soma3++;
            somaGeral++;
            break;
        case 4:
            soma4++;
            somaGeral++;
            break;
        case 5:
            soma5++;
            somaGeral++;
        }
    }
    cout<<"5: "<<(float)soma5/somaGeral<<endl;
    cout<<"4: "<<(float)soma4/somaGeral<<endl;
    cout<<"3: "<<(float)soma3/somaGeral<<endl;
    cout<<"2: "<<(float)soma2/somaGeral<<endl;
    cout<<"1: "<<(float)soma1/somaGeral<<endl;    


    return 0;
}