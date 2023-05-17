#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float Valor;
    cin>>Valor;

    if (Valor*0.2>30)
    {
        cout<<"nao "<<setprecision(2)<<fixed<<Valor*0.2<<endl;
    } else
    {
        cout<<"sim "<<setprecision(2)<<fixed<<Valor*0.2<<endl;
    }
    
    


    return 0;
}