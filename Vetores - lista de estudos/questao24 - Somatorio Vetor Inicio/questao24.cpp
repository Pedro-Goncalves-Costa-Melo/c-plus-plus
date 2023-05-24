#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int y;
    cin>>y;
    float vet[y];
    for (int i = 0; i < y; i++)
    {
        cin>>vet[i];
    }
    int N;
    cin>>N;

    float soma=0;
    for (int i = 0; i < N; i++)
    {
        soma+=vet[i];
    }
    
    cout<<setprecision(2)<<fixed<<soma<<endl;


    return 0;
}