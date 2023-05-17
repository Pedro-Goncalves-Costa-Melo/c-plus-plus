#include <iostream>

using namespace std;

int main()
{
    char Tipo;
    int pessoas, dias;
    int n1, n2, n3;

    cin >> Tipo >> pessoas >> dias;

    switch (Tipo)
    {

    case 'z':
    case 'm':
        n1=1;
        break;
    
    case 'l':
    case 'd':
        n1=2;
        break;

    case 's':
    case 'h':
        n1=3;
        break;
    
    case 'v':
    case 'f':
        n1=4;
    }

    if (pessoas==1) n2=1;

    if (pessoas==2) n2=2;

    if (pessoas>2) n2=3;

    if (dias==1 or dias==2) n3=1;

    if (dias==3 or dias==4) n3=2;
    
    if (dias==5 or dias ==6) n3=3;
    
    if (dias>=7) n3=4;
    
    cout<<n1<<n2<<n3<<endl;
    
    return 0;
}