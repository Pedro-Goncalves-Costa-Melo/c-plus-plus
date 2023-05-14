#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nomerArqv, palavra;
    cin >> nomerArqv;

    ifstream Arqv;
    Arqv.open(nomerArqv);
    Arqv >> palavra;
    

    cout << palavra << endl;
    return 0;
}