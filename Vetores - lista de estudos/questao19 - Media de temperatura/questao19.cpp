#include <iostream>

using namespace std;

int main(){

    double vet[7], soma=0;
    for (int i = 0; i < 7; i++)
    {
        cin>>vet[i];
        soma+=vet[i];
    }
    soma=soma/7;

    int acimaDaMedia=0;
    for (int i = 0; i < 7; i++)
    {
        if (vet[i]>soma)
        {
            acimaDaMedia++;
        }
        
    }
    cout<<soma<<endl<<acimaDaMedia<<endl;


    return 0;
}