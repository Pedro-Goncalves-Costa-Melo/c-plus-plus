#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ofstream saida;
    float salarioBase, bonus, imposto;
    cin >>salarioBase>>bonus>>imposto;


    saida.open("holerite.txt");
    saida <<setprecision(2)<<fixed<< salarioBase+bonus <<endl<< (salarioBase+bonus)*(imposto/100) <<endl<< (salarioBase+bonus)-(salarioBase+bonus)*(imposto/100);
    saida.close();





    return 0;
}