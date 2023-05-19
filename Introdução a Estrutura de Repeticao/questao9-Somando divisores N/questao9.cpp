#include <iostream>

using namespace std;

int main()
{
    int N, x = 0, soma = 0;
    cin >> N;

    while (x < N)
    {
        x++;
        if (N % x == 0 and x != N)
        {
            cout << x << "+";
            soma += x;
        }
        else if (x == N)
        {
            soma+=x;
            cout<<N;    
        }
    }

    cout << "=" << soma << endl;
    return 0;
}