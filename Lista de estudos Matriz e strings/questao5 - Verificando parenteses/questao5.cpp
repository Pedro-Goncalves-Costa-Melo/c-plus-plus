#include <iostream>

using namespace std;

int main(){

    string expressao;
    cin>>expressao;

    int contFecha=0;
    int contAbre=0;
    for (unsigned i = 0; i < expressao.length(); i++)
    {
        if (expressao[i]=='(')
        {
            contAbre++;
           
        }
        if (expressao[i]==')')
        {
            contFecha++;
        }
        
    }
    
    if (contAbre==contFecha)
    {
        cout<<"parenteses corretos"<<endl;
    }
    else
    {
        cout<<"parenteses incorretos"<<endl;
    }

    return 0;
}