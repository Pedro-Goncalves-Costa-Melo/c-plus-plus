#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char *vet1;
    vet1 = new char[100];

    cin.getline(vet1, 100);
    char *vet2;
    vet2 = new char[100];
    cin.getline(vet2, 100);

    int a = strlen(vet1);
    int b = strlen(vet2);
    char *vet3;
    vet3 = new char[a+b];

    copy(vet1, vet1+a, vet3);
    copy(vet2, vet2+b, vet3+a);

    for (int i = 0; i < a; i++)
    {
        cout<<vet3[i];
    }
    cout<<" ";
    for (int i = 0; i < b; i++)
    {
        cout<<vet3[a+i];
    }
    cout<<endl;
    return 0;
}