#include <iostream>

using namespace std;

int main()
{

    float trem1, trem2, distancia;
    float tempo;

    cin>>trem1>>trem2>>distancia;

    tempo= distancia/(trem1+trem2);
    
    if (tempo<=10)
    {
        cout<<"COLISAO"<<endl;
    }else {
        cout<<tempo<<endl;
    }
    


    return 0;
}