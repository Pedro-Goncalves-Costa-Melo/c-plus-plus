#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    char Operacao;

    cin>>num1>>num2>>Operacao;


    switch (Operacao)
    {
    case '+':
        cout<<num1+num2<<endl;
        break;

    case '-':
        cout<<num1-num2<<endl;
        break;

    case '*':
        cout<<num1*num2<<endl;
        break;
    
    case '/':
        cout<<num1/num2<<endl;
        break;
        
    default:
        cout<<"Insira um operador valido"<<endl;
        break;
    }



    return 0;
}