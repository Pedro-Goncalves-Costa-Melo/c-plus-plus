#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    int n, cont2=1;

    cin >> n;

    while (cont2 <= 10)
    {
        cout << n << " x " << cont2 << " = " << n * cont2 <<endl;
        cont2++;
    }
    

    return 0;
}