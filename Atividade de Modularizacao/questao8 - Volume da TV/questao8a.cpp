#include <iostream>

using namespace std;

int volume(int vet[], int vezes, int& volAtual){

    for (int i = 0; i < vezes; i++)
    {
        volAtual+=vet[i];
        if (volAtual>100)
            volAtual=100;
        if(volAtual<0)
            volAtual=0;
    }
    
    
        return volAtual;
}

int main(){

    int volAtual;
    cin>>volAtual;
    int n;
    cin>>n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];    
    }
    
    cout<<volume(vet, n, volAtual)<<endl;


    return 0;
}