#include <iostream>
#include <fstream>

using namespace std;

int main() {
        int N, N1, N2, N3;
        ofstream ArqvOut;
        cin >> N;

        N1 = N/100;
        N2 = (N%100)/10;
        N3 = (N%100)%10;
        
        cout << N1 + N2 + N3 << endl;

        ArqvOut.open("saida.txt");
        ArqvOut << N1*N2*N3 << endl;
        ArqvOut.close();
    
    
    
    
    return 0;}


