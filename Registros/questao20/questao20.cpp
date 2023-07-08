#include <iostream>

using namespace std;

struct Pokemon
{
    string nome;
    int ataque;
    int defesa;
};

struct Treinador
{
    string nome;
    Pokemon pokemon1;
    Pokemon pokemon2;
    Pokemon pokemon3;
    bool vencedor;

    int MaiorAtk;
    int MaiorDef;
};

void duelo(Treinador &a, Treinador &b)
{
    if (a.MaiorAtk > b.MaiorDef)
    {
        a.vencedor = true;
        b.vencedor = false;
    }
    else
    {
        a.vencedor = false;
        b.vencedor = true;
    }
}
int main()
{

    int n;
    cin >> n;
    Treinador vetTreinador[n];

    int indice1, indice2;
    for (int i = 0; i < n; i++)
    {
        cin >> vetTreinador[i].nome;
        cin >> vetTreinador[i].pokemon1.nome;
        cin >> vetTreinador[i].pokemon1.ataque;
        cin >> vetTreinador[i].pokemon1.defesa;
        cin >> vetTreinador[i].pokemon2.nome;
        cin >> vetTreinador[i].pokemon2.ataque;
        cin >> vetTreinador[i].pokemon2.defesa;
        cin >> vetTreinador[i].pokemon3.nome;
        cin >> vetTreinador[i].pokemon3.ataque;
        cin >> vetTreinador[i].pokemon3.defesa;
        vetTreinador[i].MaiorAtk = 0;
        vetTreinador[i].MaiorDef = 0;
        if (vetTreinador[i].MaiorAtk<vetTreinador[i].pokemon1.ataque)
        {
            vetTreinador[i].MaiorAtk=vetTreinador[i].pokemon1.ataque;
        }
        if (vetTreinador[i].MaiorAtk<vetTreinador[i].pokemon2.ataque)
        {
            vetTreinador[i].MaiorAtk=vetTreinador[i].pokemon2.ataque;
        }
        if (vetTreinador[i].MaiorAtk<vetTreinador[i].pokemon3.ataque)
        {
            vetTreinador[i].MaiorAtk=vetTreinador[i].pokemon3.ataque;
        }
        
        if (vetTreinador[i].MaiorDef<vetTreinador[i].pokemon1.defesa)
        {
            vetTreinador[i].MaiorDef=vetTreinador[i].pokemon1.defesa;
        }
        if (vetTreinador[i].MaiorDef<vetTreinador[i].pokemon2.defesa)
        {
            vetTreinador[i].MaiorDef=vetTreinador[i].pokemon2.defesa;
        }
        if (vetTreinador[i].MaiorDef<vetTreinador[i].pokemon3.defesa)
        {
            vetTreinador[i].MaiorDef=vetTreinador[i].pokemon3.defesa;
        }
        
        
    }
    cin >> indice1;
    cin >> indice2;

    

    duelo(vetTreinador[indice1], vetTreinador[indice2]);
    if (vetTreinador[indice1].vencedor)
    {
        cout << vetTreinador[indice1].nome << endl;

        if (vetTreinador[indice1].pokemon1.ataque == vetTreinador[indice1].MaiorAtk)
        {
            cout << vetTreinador[indice1].pokemon1.nome << endl;
        }
        if (vetTreinador[indice1].pokemon2.ataque == vetTreinador[indice1].MaiorAtk)
        {
            cout << vetTreinador[indice1].pokemon2.nome << endl;
        }
        if (vetTreinador[indice1].pokemon3.ataque == vetTreinador[indice1].MaiorAtk)
        {
            cout << vetTreinador[indice1].pokemon3.nome << endl;
        }
    }
    else
    {
        cout << vetTreinador[indice2].nome<<endl;

        if (vetTreinador[indice2].pokemon1.defesa == vetTreinador[indice2].MaiorDef)
        {
            cout << vetTreinador[indice2].pokemon1.nome << endl;
        }
        if (vetTreinador[indice2].pokemon2.defesa == vetTreinador[indice2].MaiorDef)
        {
            cout << vetTreinador[indice2].pokemon2.nome << endl;
        }
        if (vetTreinador[indice2].pokemon3.defesa == vetTreinador[indice2].MaiorDef)
        {
            cout << vetTreinador[indice2].pokemon3.nome << endl;
        }
    }

    return 0;
}