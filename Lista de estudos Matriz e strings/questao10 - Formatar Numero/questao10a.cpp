#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string numero;
    cin >> numero;

    string parte2[3];
    parte2[0] = ',';
    parte2[1] = numero[numero.size() - 2];
    parte2[2] = numero[numero.size() - 1];

    string primeiraParte;

    primeiraParte=numero;
    


    if (primeiraParte.size()>5)
    {
        unsigned aux;
        if ((primeiraParte.size()-2)%3==0)
        {
            for (unsigned i = 0; i < primeiraParte.size()-2; i+=3)
            {
                aux=primeiraParte.size()-2-i;
                cout<<primeiraParte[i];
                cout<<primeiraParte[i+1];
                cout<<primeiraParte[i+2];
                if (aux!=3)
                {
                    cout<<'.';
                }
            }
            
            for (int i = 0; i < 3; i++)
            {
                cout << parte2[i];
            }
        }
        else if ((primeiraParte.size()-2)%3==2)
        {
            cout<<primeiraParte[0]<<primeiraParte[1]<<'.';
            for (unsigned i = 2; i < primeiraParte.size()-2; i+=3)
            {
                aux=primeiraParte.size()-2-i;
                cout<<primeiraParte[i];
                cout<<primeiraParte[i+1];
                cout<<primeiraParte[i+2];
                if (aux!=3)
                {
                    cout<<'.';
                }
            }

            for (int i = 0; i < 3; i++)
            {
                cout << parte2[i];
            }
        }
        else if ((primeiraParte.size()-2)%3==1)
        {
            cout<<primeiraParte[0]<<'.';
            for (unsigned i = 1; i < primeiraParte.size()-2; i+=3)
            {
                aux=primeiraParte.size()-2-i;
                cout<<primeiraParte[i];
                cout<<primeiraParte[i+1];
                cout<<primeiraParte[i+2];
                if (aux!=3)
                {
                    cout<<'.';
                }
            }

            for (int i = 0; i < 3; i++)
            {
                cout << parte2[i];
            }
        }
        
    }
    else 
    {
        for (unsigned i = 0; i < primeiraParte.size()-2; i++)
        {
            cout<<primeiraParte[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cout << parte2[i];
        }
    }

    
    
    return 0;
}