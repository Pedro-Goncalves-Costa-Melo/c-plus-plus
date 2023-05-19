#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n=10, cont=-1;
    int x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, x7=0;

    while (n != 0)
    {
        cin >> n;
        cont++;

        if (n==1)
        {
            x1++;
            x7++;
        }

        if (n==2)
        {
            x2++;
            x7++;
        }

        if (n==3)
        {
            x3++;
            x7++;
        }

        if (n==4)
        {
            x4++;
            x7++;
        }
        
        if (n==5)
        {
            x5++;
        }
        
        if (n==6)
        {
            x6++;
        }
        
    }
        cout<<setprecision(11)<<fixed<<"1: "<<x1<<" "<< (double)x1/(cont) <<endl;
        cout<<setprecision(11)<<fixed<<"2: "<<x2<<" "<< (double)x2/(cont) <<endl;
        cout<<setprecision(11)<<fixed<<"3: "<<x3<<" "<< (double)x3/(cont) <<endl;
        cout<<setprecision(11)<<fixed<<"4: "<<x4<<" "<< (double)x4/(cont) <<endl;
        cout<<setprecision(11)<<fixed<<"5: "<<x5<<" "<< (double)x5/(cont) <<endl;
        cout<<setprecision(11)<<fixed<<"6: "<<x6<<" "<< (double)x6/(cont) <<endl;
        cout<<setprecision(11)<<fixed<<"7: "<<x7<<" "<< (double)x7/(cont) <<endl;

    return 0;
}