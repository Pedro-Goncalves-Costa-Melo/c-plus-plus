#include <iostream>

using namespace std;
struct Medalhas
{
    int ouro;
    int prata;
    int bronze;
    int pontos;
};

int main(){

    int *vetValores;
    vetValores = new int [3];

    for (int i = 0; i < 3; i++)
    {
        cin>>vetValores[i];
    }
    
    Medalhas *varMedalhas;
    varMedalhas = new Medalhas;

    cin>>varMedalhas[0].ouro>>varMedalhas[0].prata>>varMedalhas[0].bronze;

    varMedalhas[0].pontos+=varMedalhas[0].ouro * vetValores[0];
    varMedalhas[0].pontos+=varMedalhas[0].prata * vetValores[1];
    varMedalhas[0].pontos+=varMedalhas[0].bronze * vetValores[2];

    cout<<varMedalhas[0].pontos<<endl;
    return 0;
}