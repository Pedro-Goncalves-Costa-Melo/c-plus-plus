#include <iostream>

using namespace std;

int main()
{

    int a, b, j=-1;
    cin >> a >> b;

    while (a>=0)
    {
        a-=b;
        j++;
    }
    cout << j <<endl;

    return 0;
}