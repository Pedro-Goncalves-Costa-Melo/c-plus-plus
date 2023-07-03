#include <iostream>

using namespace std;

struct Hidrocarboneto
{
    int C;
    int H;
};

int main()
{

    Hidrocarboneto *hidrocarbonetos;
    hidrocarbonetos = new Hidrocarboneto;

    cin>>hidrocarbonetos[0].C>>hidrocarbonetos[0].H;

    cout<<(hidrocarbonetos[0].C*12) + (hidrocarbonetos[0].H)<<endl;

    return 0;
}