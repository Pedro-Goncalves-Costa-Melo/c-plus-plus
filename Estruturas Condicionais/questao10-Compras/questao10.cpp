#include <iostream>

using namespace std;

int main()
{
    float compra;
    string A;
    int prestacoes;

    cin >> compra >> A;

    if (A == "V")
    {
        cout << compra * 0.9 << endl;
    }
    else if (A == "P")
    {
        cin >> prestacoes;
    }
    if (prestacoes == 3)
    {
        cout << compra << endl
             << compra / 3 << endl;
    }
    else if (prestacoes == 6)
    {
        cout << compra * 1.05 << endl
             << (compra * 1.05) / 6 << endl;
    }
    else if (prestacoes == 12)
    {
        cout << compra * 1.1 << endl
             << (compra * 1.1) / 12 << endl;
    }

    return 0;
}