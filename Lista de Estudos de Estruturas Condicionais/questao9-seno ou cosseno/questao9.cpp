#include <iostream>
#include <cmath>

using namespace std;

int main(){

    char senOuCos;
    cin>>senOuCos;

    char grauOuRad;
    cin>>grauOuRad;

    float angulo;
    cin>>angulo;

    const long double PI = 3.1415926535897;

    if (senOuCos=='s')
    {
        if (grauOuRad=='g')
        {
            cout<<sin(angulo * PI / 180)<<endl;
        }
        
        if (grauOuRad=='r')
        {
            cout<<sin(angulo * PI / 180)<<endl;
        }
        
    }
    
    if (senOuCos=='c')
    {
        if (grauOuRad=='g')
        {
            cout<<cos(angulo * PI / 180)<<endl;
        }
        
        if (grauOuRad=='r')
        {
            cout<<cos(angulo * PI / 180)<<endl;
        }
        
    }
    


    return 0;
}