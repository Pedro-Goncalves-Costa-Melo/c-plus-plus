#include <iostream>

using namespace std;

int main(){

    int N;
    cin>>N;
    float vet[N];
    for (int i = 0; i < N; i++)
    {
        cin>>vet[i];
    }
    int M;
    cin>>M;
    int vet2[M];
    for (int i = 0; i < M; i++)
    {
        cin>>vet2[i];
    }
    
    for (int i = 0; i < M; i++)
    {
        vet[vet2[i]]=(float)vet[vet2[i]]/2;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout<<vet[i]<<" ";
    }
    


    return 0;
}