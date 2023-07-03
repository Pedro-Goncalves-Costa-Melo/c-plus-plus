#include <iostream>
#include <fstream>

using namespace std;

struct Carro
{
    string marca;
    int ano;
    float distancia;
    float consumo;
};
float kmPorLitro(Carro var)
{
    float rendimento;

    rendimento = var.distancia / var.consumo;

    return rendimento;
}
int main()
{

    Carro *varCarro = new Carro;

    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");
    if (entrada)
    {
        entrada >> varCarro[0].marca;
        entrada >> varCarro[0].ano;
        entrada >> varCarro[0].distancia;
        entrada >> varCarro[0].consumo;

        saida << varCarro[0].marca << endl;
        saida << varCarro[0].ano << endl;
        saida << varCarro[0].consumo << endl;
        saida << kmPorLitro(*varCarro) << endl;
    }
    else
        cout << "Não foi possivel abrir o arquivo de entrada" << endl;

    return 0;
}