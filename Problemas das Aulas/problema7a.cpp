#include <iostream>

using namespace std;

struct compadre
{
    string nome;
    string alimento1; 
    string alimento2;
    int quantidade1;
    int quantidade2;
};
struct alimento
{
    string nome;
    int quantidade;
};

void inserirAlimento(alimento vetorAlim[], int& tamVA, string alimento, int quantAlim)
{
    int i=0;

    while ((i<tamVA) and vetorAlim[i].nome!=alimento)
    {
        i++;
    }
    if (i<tamVA)
    {
        vetorAlim[i].quantidade +=quantAlim;
    }else
    {
        vetorAlim[i].nome=alimento;
        vetorAlim[i].quantidade=quantAlim;
        tamVA++;
    }
    
    
}
int main(){
    int n;
    cout<<"quantos convidados sao: "<<endl;
    cin>>n;

    compadre Vetorcompadre[n];
    for (int i = 0; i < n; i++)
    {
        cin>>Vetorcompadre[i].nome;
        cin>>Vetorcompadre[i].alimento1;
        cin>>Vetorcompadre[i].quantidade1;
        cin>>Vetorcompadre[i].alimento2;
        cin>>Vetorcompadre[i].quantidade2;
    }
    
    alimento vetorAlimentos[2*n];
    int qtdAlimentos=0;
    for (int i = 0; i < n; i++)
    {
        inserirAlimento(vetorAlimentos, qtdAlimentos, Vetorcompadre[i].alimento1,Vetorcompadre[i].quantidade1);
        inserirAlimento(vetorAlimentos, qtdAlimentos, Vetorcompadre[i].alimento2,Vetorcompadre[i].quantidade2);

    }
    for (int i = 0; i < qtdAlimentos; i++)
    {
        cout<<vetorAlimentos[i].nome<<" "<<vetorAlimentos[i].quantidade<<endl;
    }
    

    return 0;
}