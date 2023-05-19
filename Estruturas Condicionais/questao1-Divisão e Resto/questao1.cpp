#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y != 0)
    {
        cout << x / y << endl;
        cout << x % y << endl;
    }
    else
    {
        cout << "erro" << endl;
    }

    return 0;
}