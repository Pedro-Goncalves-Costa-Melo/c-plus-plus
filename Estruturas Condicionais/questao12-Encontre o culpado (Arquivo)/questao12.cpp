#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string A1, A2, A3, A4, A5, sus1, sus2, sus3;
    ifstream entrada;
    int cont=0;

    entrada.open("investigacao.txt");
    entrada >> sus1;
    entrada >> sus2;
    entrada >> sus3;
    entrada >> A1;
    entrada >> A2;
    entrada >> A3;
    entrada >> A4;
    entrada >> A5;
    entrada.close();

    if (A1 == "sim")
    {
        cont++;
    }
    if (A2 == "sim")
    {
        cont++;
    }
    if (A3 == "sim")
    {
        cont++;
    }
    if (A4 == "sim")
    {
        cont++;
    }
    if (A5 == "sim")
    {
        cont++;
    }

    if (cont == 5)
    {
        cout << sus3 << endl;
    }else
    if (cont == 2)
    {
        cout << sus1 << endl;
    }else
    if (cont == 3 or cont == 4)
    {
        cout << sus2 << endl;
    }
    else
    {
        cout << sus1 << " "
             << sus2 << " "
             << sus3 << endl;
    }

    return 0;
}
