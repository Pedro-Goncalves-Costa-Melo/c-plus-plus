#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    float valor;
    ifstream entrada("ingresso.txt");
    entrada >> valor;

    char classe;
    int dia;
    float soma = 0;

    while (entrada >> dia and entrada >> classe)
    {
        switch (classe)
        {
        case 'A':

            if (dia >= 6 and dia <= 13)
            {
                soma += valor * 0.9;
            }
            else if (dia >= 6 and dia <= 24)
            {
                soma += valor * 0.95;
            }
            else
            {
                soma += valor;
            }
            break;

        case 'E':
            if (dia >= 6 and dia <= 13)
            {
                soma += valor * 0.85;
            }
            else if (dia >= 6 and dia <= 24)
            {
                soma += valor * 0.9;
            }
            else
            {
                soma += valor;
            }

            break;
        }
    }

    cout << soma << endl;

    return 0;
}