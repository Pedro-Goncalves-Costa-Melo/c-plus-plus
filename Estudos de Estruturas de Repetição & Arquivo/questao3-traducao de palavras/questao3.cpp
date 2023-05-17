#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string A, B, C;
    cin>>A>>B>>C;

    ifstream entradaPt(A), entradaIg(B);
    ofstream saida(C);

    string port, ing;

    while (entradaPt>>port and entradaIg>>ing)
    {
        saida<<port<<": "<<ing<<endl;
    }
    

    return 0;
}