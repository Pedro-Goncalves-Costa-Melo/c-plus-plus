#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream entrada("tentativas.txt");
    int senha;
    int cont = 0;

    while (entrada >> senha)
    {
        cont++;
    }

    if (senha == 23031999)
    {
        cout << "acessou " << cont << endl;
    }else {
        cout<<"nao "<<cont<<endl;
    }

    return 0;
}