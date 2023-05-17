#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string nomeArqv;
    cin >> nomeArqv;
    ifstream entrada(nomeArqv);
    ofstream saida("dobro.txt");

    int num1, num2, num2Antigo;
    int cont = 0;

    while (entrada>>num1)
    {
        entrada>>num2;

        if (num2==num1*2)
        {
            cont++;
        } 
        
        if (num2Antigo*2==num1)
        {
            cont++;
        }
        
        
        num2Antigo=num2;
        
        
    }

    saida << cont << endl;

    return 0;
}