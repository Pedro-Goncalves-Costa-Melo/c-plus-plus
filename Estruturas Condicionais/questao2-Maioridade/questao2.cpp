#include <iostream>

using namespace std;

int main()
{
    int idade;
    cin >> idade;
    if (idade >= 18)
    {
        cout << "MAIOR DE IDADE" << endl;
    }
    else
    {
        cout << "MENOR DE IDADE" << endl;
    }

    return 0;
}