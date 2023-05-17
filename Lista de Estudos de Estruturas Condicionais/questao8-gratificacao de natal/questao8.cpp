#include <iostream>

using namespace std;

int main()
{

    float extras, faltas, H;

    cin >> extras >> faltas;

    H = (extras * 60) - (2 / 3*(faltas * 60));

    if (H <= 600)
    {   
        cout << 100 << endl;
    }
    else if (H > 600 and H <= 1200)
    {
        cout << 200 << endl;
    }
    else if (H > 1200 and H <= 1800)
    {
        cout << 300 << endl;
    }
    else if (H > 1800 and H <= 2400)
    {
        cout << 400 << endl;
    }
    else
    {
        cout << 500 << endl;
    }

    return 0;
}