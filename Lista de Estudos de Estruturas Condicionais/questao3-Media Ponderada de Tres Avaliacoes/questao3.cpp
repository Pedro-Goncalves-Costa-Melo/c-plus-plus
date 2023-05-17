#include <iostream>

using namespace std;

int main()
{

    float n1, n2, n3, media;
    cin >> n1 >> n2 >> n3;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    cout << media << endl;

    if (media <= 10 and media >= 8)
        cout << "A" << endl;
    else if (media > 7)
        cout << "B" << endl;
    else if (media > 6)
        cout << "C" << endl;
    else if (media > 5)
        cout << "D" << endl;
    else
        cout << "E" << endl;

    return 0;
}
