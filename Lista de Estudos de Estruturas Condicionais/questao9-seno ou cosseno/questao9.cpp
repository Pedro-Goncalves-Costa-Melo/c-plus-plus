#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    char senOuCos;
    cin>>senOuCos;

    char grauOuRad;
    cin>>grauOuRad;

    float angulo;
    cin>>angulo;

    const double pi=acos(-1);

    if (senOuCos=='s')
    {   
        if (grauOuRad=='g')
        {
            cout << setprecision(6) << fixed << sin (angulo*pi/180);
        }
        
        if (grauOuRad=='r')
        {
            cout << setprecision(6) << fixed << sin (angulo);
        }
        
    }
    
    if (senOuCos=='c')
    {
        if (grauOuRad=='g')
        {
            cout << setprecision(6) << fixed << cos (angulo*pi/180);
        }

        if (grauOuRad=='r')
        {
            cout << setprecision(6) << fixed << cos (angulo);
        }
        
        
    }
    
    


    return 0;
}