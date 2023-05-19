#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream entrada;
    float dom, seg, ter, quar, quin, sex, sab;

    entrada.open("jazida.txt");
    entrada >> dom;
    entrada >> seg;
    entrada >> ter;
    entrada >> quar; 
    entrada >> quin; 
    entrada >> sex;
    entrada >> sab;
    entrada.close();

    if (dom > seg and dom > ter and dom > quar and dom > quin and dom > sex and dom > sab)
    {
        cout << "domingo" << endl
             <<setprecision(2)<<fixed<< dom << endl;
    } else
    if (seg > dom and seg > ter and seg > quar and seg > quin and seg > sex and seg > sab)
    {
        cout << "segunda-feira" << endl
             <<setprecision(2)<<fixed<< seg << endl;
    } else
    if (ter > dom and ter > seg and ter > quar and ter > quin and ter > sex and ter > sab)
    {
        cout << "terca-feira" << endl
             <<setprecision(2)<<fixed<< ter << endl;
    } else
    if (quar > dom and quar > seg and quar > ter and quar > quin and quar > sex and quar > sab)
    {
        cout << "quarta-feira" << endl
             <<setprecision(2)<<fixed<< quar << endl;
    } else
    if (quin > dom and quin > seg and quin > ter and quin > quar and quin > sex and quin > sab)
    {
        cout << "quinta-feira" << endl
             <<setprecision(2)<<fixed<< quin << endl;
    } else
    if (sex > dom and sex > seg and sex > ter and sex > quar and sex > quin and sex > sab)
    {
        cout << "sexta-feira" << endl
             <<setprecision(2)<<fixed<< sex << endl;
    } else
        cout << "sabado" << endl
             <<setprecision(2)<<fixed<< sab << endl;

    return 0;
}


