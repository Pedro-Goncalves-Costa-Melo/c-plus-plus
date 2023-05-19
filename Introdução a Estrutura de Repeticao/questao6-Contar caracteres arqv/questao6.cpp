#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int cont=0;
    ifstream entrada;
    string x;
    char A;

    cin>>x;
    entrada.open(x);

    if (entrada)
    {
        while (entrada>>A)
        {
            cont++;
        }
        entrada.close();
        cout<<cont<<endl;
    } else{
        cout << "arquivo nao pode ser aberto"<<endl;
    }

    return 0;
}