#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream ArqvA("arquivoA.txt"), ArqvB("arquivoB.txt");
    ofstream ArqvC("arquivoC.txt");

    string palavraA, palavraB;

    while (ArqvA>>palavraA and ArqvB>>palavraB)
    {
        ArqvC<<palavraA<<" ";
        ArqvC
    }
    

    return 0;
}