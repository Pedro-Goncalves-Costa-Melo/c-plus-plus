#include <iostream>

using namespace std;

int main()
{
    int Ano;
    cin >> Ano;

    if (Ano % 400 == 0)
    {
        cout << 1 << endl;
    }
    else if (Ano % 4 == 0 and Ano % 100 != 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}