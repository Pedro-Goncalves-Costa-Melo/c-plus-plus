#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    char X;
    string nomeArqv;
    cin >> nomeArqv;
    ifstream entrada(nomeArqv);

    int cont = 0;
    while (entrada >> X)
    {
        switch (X)
        {
        case 'A':
        case 'a':
        case 'e':
        case 'E':
        case 'O':
        case 'o':
        case 'I':
        case 'i':
        case 'U':
        case 'u':
            cont++;
            break;
        }
    }

    cout << cont << endl;
    return 0;
}