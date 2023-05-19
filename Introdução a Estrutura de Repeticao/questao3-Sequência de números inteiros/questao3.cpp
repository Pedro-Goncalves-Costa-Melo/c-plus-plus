#include <iostream>

using namespace std;

int main()
{

    int n = 10, soma = 0, posit = 0, negat = 0, cont = -1;

    while (n != 0)
    {
        cont++;
        cin >> n;
        soma += n;

        if (n > 0)
        {
            posit++;
        }
        else if (n < 0)
        {
            negat++;
        }
    }
    cout << (float)soma / cont << endl
         << posit << endl
         << negat << endl
         << (float)posit / (posit + negat) << endl
         << (float)negat / (posit + negat) << endl;
    return 0;
}