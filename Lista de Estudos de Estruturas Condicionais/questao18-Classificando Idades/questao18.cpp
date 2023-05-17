#include <iostream>

using namespace std;

int main(){

    int idade;
    cin>>idade;

    switch (idade)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        cout<<"Nao registrado"<<endl;
        break;
    case 5:
    case 6:
    case 7:
        cout<<"Infantil"<<endl;
        break;
    case 8:
    case 9:
    case 10:
        cout<<"Juvenil"<<endl;
        break;
    case 11:    
    case 12:
    case 13:
    case 14:
    case 15:
        cout<<"Adolescente"<<endl;
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        cout<<"Adulto"<<endl;
        break;
    }

    if (idade>30)
    cout<<"Senior"<<endl;
    
    
    

    return 0;
}