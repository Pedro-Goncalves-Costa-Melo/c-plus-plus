#include <iostream>

using namespace std;

int main()
{
    int idade;
    float peso;

    cin >> idade >> peso;

    // se a idade for menor que ]20 anos
    if (idade < 20)
    {
        if (peso < 60)
        {
            cout << 9 << endl;
        }
        else if (peso <= 90)
        {
            cout << 8 << endl;
        }
        else
            cout << 7 << endl;
    }

    // se a idade for entre [20 e 50] anos
    if (idade >= 20 and idade<= 50)
    {
        if (peso < 60)
        {
            cout << 6 << endl;
        }
        else if (peso <= 90)
        {
            cout << 5 << endl;
        }
        else
            cout << 4 << endl;
    }

    // se a idade for maior que ]50
    if (idade > 50)
    {
        if (peso < 60)
        {
            cout << 3 << endl;
        }
        else if (peso <= 90)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
