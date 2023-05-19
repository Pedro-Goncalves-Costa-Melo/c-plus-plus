#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// formula= sqrt((x2-x1)^2 + (y2-y1)^2)
int main()
{
    float dist1, dist2, dist3;
    int x1, x2, x3, y1, y2, y3;
    float carro1, bike1, carro2, bike2, carro3, bike3;
    string A, B, C;
    cin >> x1 >> y1 >> A >> x2 >> y2 >> B >> x3 >> y3 >> C;

    dist1 = sqrt(pow(x1, 2) + pow(y1, 2));
    dist2 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    dist3 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

    if (A == "livre")
    {
        carro1 = 5 * dist1;
        bike1 = 15 * dist1;
    }
    else
    {
        carro1 = dist1 * 24;
        bike1 = dist1 * 18;
    }

    if (B == "livre")
    {
        carro2 = dist2 * 5;
        bike2 = dist2 * 15;
    }
    else
    {
        carro2 = dist2 * 24;
        bike2 = dist2 * 18;
    }

    if (C == "livre")
    {
        carro3 = dist3 * 5;
        bike3 = dist3 * 15;
    }
    else
    {
        carro3 = dist3 * 24;
        bike3 = dist3 * 18;
    }

    if (carro1 + carro2 + carro3 > bike1 + bike2 + bike3)
    {
        cout <<"Bicicleta "<< ceil(bike1 + bike2 + bike3) << endl;
    }
    else
    {
        cout <<"Carro "<< ceil(carro1 + carro2 + carro3) << endl;
    }

    return 0;
}