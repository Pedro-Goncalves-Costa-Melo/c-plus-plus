#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;
    unsigned int h;
    cin >> h >> x >> y;

    while (h > 360)
    {
        h -= 360;
    }
    if (h >= 0.00000001 and h < 90)
    {
        cout << x + y << endl;
    }
    if (h >= 90 and h < 180)
    {
        cout << x * y << endl;
    }
    if (h >= 180 and h < 270)
    {
        cout << x / y << endl;
    }
    if (h >= 270 and h < 360)
    {
        cout << pow(x, y) << endl;
    }
    return 0;
}