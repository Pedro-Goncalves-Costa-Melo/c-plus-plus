#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int vet[20];
    int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
    for (int i = 0; i < 20; i++)
    {
        cin >> vet[i];

        switch (vet[i])
        {
        case 1:
            cont1++;
            break;
        case 2:
            cont2++;
            break;
        case 3:
            cont3++;
            break;
        case 4:
            cont4++;
            break;
        case 5:
            cont5++;
            break;
        case 6:
            cont6++;
            break;

        default:
            break;
        }
    }

    cout<<setprecision(2)<<fixed<<"1: "<< (float)cont1/20<<endl;
    cout<<setprecision(2)<<fixed<<"2: "<< (float)cont2/20<<endl;
    cout<<setprecision(2)<<fixed<<"3: "<< (float)cont3/20<<endl;
    cout<<setprecision(2)<<fixed<<"4: "<< (float)cont4/20<<endl;
    cout<<setprecision(2)<<fixed<<"5: "<< (float)cont5/20<<endl;
    cout<<setprecision(2)<<fixed<<"6: "<< (float)cont6/20<<endl;    
    return 0;
}