#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");

    int N;
    string nome;
    float nota1, nota2, media;

    entrada >> N;

    for (int i = N; i != 0; i--)
    {
        entrada >> nome >> nota1 >> nota2;
        media = (nota1 + nota2) / 2;
        if (media < 7.0)
        {
            saida << nome << endl;
        }
    }

    return 0;
}