#include <iostream>

using namespace std;

int main()
{
    double A, B;
    int X;

    cin>>A>>B>>X;

    switch (X)
    {
    case 1:
        cout << (A + B) / 2 << endl;
        break;

    case 2:
        if (A > B)
            cout << A - B << endl;
        else
            cout << B - A << endl;
        break;

    case 3:
        cout << A * B << endl;
        break;

    case 4:
        if (B!=0)
        {
            cout << A / B << endl;
        }
        else
        {
            cout<<"ERRO"<<endl;
        }
        break;

    default:
        cout<<"ERRO" <<endl;
        break;
    }

    return 0;
}