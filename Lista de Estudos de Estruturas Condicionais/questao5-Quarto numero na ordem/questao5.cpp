#include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    if (n4 < n1 or n4 == n1)
    {
        cout << n4 << " " << n1 << " " << n2 << " " << n3 << endl;
    }

    if ((n4 > n1 and n4 < n2) or n4 == n2)
    {
        cout << n1 << " " << n4 << " " << n2 << " " << n3 << endl;
    }

    if ((n4 > n2 and n4 < n3) or n4 == n3)
    {
        cout << n1 << " " << n2 << " " << n4 << " " << n3 << endl;
    }

    if (n4 > n3)
    {
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    }

    return 0;
}