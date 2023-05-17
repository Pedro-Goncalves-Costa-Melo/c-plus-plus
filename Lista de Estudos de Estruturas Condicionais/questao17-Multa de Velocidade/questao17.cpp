#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float valorMulta;
    int velocidadeMax, velocidadeRegist;
    cin>>valorMulta>>velocidadeMax>>velocidadeRegist;

    
    if (velocidadeRegist>velocidadeMax*1.3)
    {
        cout<<"R$ "<<setprecision(2)<<fixed<<valorMulta*1.5<<endl;
    }else
    {
        cout<<"NAO SE APLICA"<<endl;
    }
    
    



    return 0;
}