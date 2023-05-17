#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int codigo, pais;
    float pesoKG, pesog, precoBruto, valorImposto;

    cin >> codigo >> pesoKG >> pais;

    pesog = pesoKG * 1000;
    cout << setprecision(1) << fixed << pesog << endl;

    if (codigo >= 1 and codigo <= 4)
    {
        precoBruto = pesog * 10;
        cout << setprecision(1) << fixed << precoBruto << endl;
    }
    else if (codigo >= 5 and codigo <= 7)
    {
        precoBruto = pesog * 25;
        cout << setprecision(1) << fixed << precoBruto << endl;
    }
    else
    {
        precoBruto = pesog * 35;
        cout << precoBruto << endl;
    }

    if (pais == 1)
    {
        valorImposto = 0;
        cout << setprecision(1) << fixed << valorImposto << endl;
        cout << setprecision(1) << fixed << valorImposto + precoBruto << endl;
    }
    else if (pais == 2)
    {
        valorImposto = (precoBruto * 1.15)-precoBruto;
        cout << setprecision(1) << fixed << valorImposto << endl;
        cout << setprecision(1) << fixed << valorImposto + precoBruto << endl;
    }
    else
    {
        valorImposto = (precoBruto * 1.25)-precoBruto;
        cout << setprecision(1) << fixed << valorImposto << endl;
        cout << setprecision(1) << fixed << valorImposto + precoBruto << endl;
    }

    return 0;
}