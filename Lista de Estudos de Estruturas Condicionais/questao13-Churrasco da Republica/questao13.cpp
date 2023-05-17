#include <iostream>

using namespace std;

int main()
{

    int num1, num2, num3, num4, num5, num6, num7;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7;
    float soma=0;

    soma+=num1*28.9;
    soma+=num2*19.9;
    soma+=num3*7.95;
    soma+=num4*2.99;
    soma+=num5*1.5;
    soma+=num6*1.85;
    soma+=num7*8.7;

    if (soma<=200)
    {
        cout<<soma<<endl<<soma*0.05<<endl<<soma*0.95<<endl;
    }else if (soma>200)
    {
        cout<<soma<<endl<<soma*0.1<<endl<<soma*0.9<<endl;
    }
    
    return 0;
}