#include <iostream>

using namespace std;

int main()
{

    float num1, num2, num3, num4;
    cin>>num1>> num2>> num3>> num4;

    float maior, maior2;
    maior=num1;
    maior2=num2;

    if (num2>num1)
    {
        maior=num2;
        maior2=num1;
    }

    if (num3>maior)
    {
        maior2=maior;
        maior=num3;

    }else if(num3>maior2){
        maior2=num3;
    }
    
    if(num4>maior)
    {
        maior2=maior;
        maior=num4;

    }else if(num4>maior2)
    {
        maior2=num4;
    }

    
    cout<<maior<<endl<<maior2<<endl;


    return 0;
}