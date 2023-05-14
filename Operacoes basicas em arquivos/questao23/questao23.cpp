#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream entrada;
    ofstream saida;
    int N, p1,p2,p3,p4,p5,p6,f1,f2,f3,f4,f5;

    entrada.open("entrada.txt");
    entrada >> N;
    entrada.close();

    p1 = (N/100000)-(N/1000000);
    p2 = (N/10000)-(p1*10);
    p3 = (N/1000)-(p1*100)-(p2*10);
    p4 = (N/100)-(p1*1000)-(p2*100)-(p3*10);
    p5 = (N/10)-(p1*10000)-(p2*1000)-(p3*100)-(p4*10);
    p6 = (N/1)-(p1*100000)-(p2*10000)-(p3*1000)-(p4*100)-(p5*10);

    f1=p1/p2;
    f2=p2/p3;
    f3=p3/p4;
    f4=p4/p5;
    f5=p5/p6;

    saida.open("saida.txt");
    saida <<f1<<f2<<f3<<f4<<f5<<endl;
    saida.close();

    return 0;
}