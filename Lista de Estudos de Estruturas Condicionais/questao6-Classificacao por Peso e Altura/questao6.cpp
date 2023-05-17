#include <iostream>

using namespace std;

int main()
{

    double altura, peso;

    cin >> peso >> altura;

    if (peso < 60)
    {
        if (altura < 1.20)
        {
            cout << "A" << endl;
        }
        else if (altura >= 1.20 and altura <= 1.70)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "C" << endl;
        }
    }
    else if (peso >= 60 and peso <= 90)
    {
        if (altura < 1.20)
        {
            cout << "D" << endl;
        }
        else if (altura >= 1.20 and altura <= 1.70)
        {
            cout << "E" << endl;
        }
        else
        {
            cout << "F" << endl;
        }
    }
    else if (peso > 90)
    {
        if (altura < 1.20)
        {
            cout << "G" << endl;
        }
        else if (altura >= 1.20 and altura <= 1.70)
        {
            cout << "H" << endl;
        }
        else
        {
            cout << "I" << endl;
        }
    }

    return 0;
}