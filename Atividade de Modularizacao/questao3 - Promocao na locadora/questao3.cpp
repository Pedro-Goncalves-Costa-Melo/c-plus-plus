#include <iostream>

using namespace std;

int calculo(int vet1[], int vet2[])
{
    for (int i = 0; i < 10; i++)
    {
        vet2[i]=vet1[i]/10;
    }
    return 0;
}
int main(){

    int vet1[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>vet1[i];
    }
    int vet2[10];

    calculo(vet1, vet2);

    for (int i = 0; i < 10; i++)
    {
        cout<<vet2[i]<<" ";
    }
    cout<<endl;
    return 0;
}