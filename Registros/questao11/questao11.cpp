#include <iostream>

using namespace std;

struct sangue
{
    string nome;
    string tipo;
};

int main()
{

    int n;
    cin >> n;
    sangue vetSangue[n];
    for (
        int i = 0; i < n; i++)
    {
        cin >> vetSangue[i].nome;
        cin >> vetSangue[i].tipo;
    }

    string alvo;
    cin >> alvo;

    if (alvo == "O")
    {
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "O")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }
    }
    else if (alvo == "AB")
    {
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "AB")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "A")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "B")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "O")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }
    }
    else if (alvo == "A")
    {
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "A")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo == "O")
            {
                cout << vetSangue[i].nome<<endl;
            }
        }
    }
    else if (alvo=="B")
    {
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo=="B")
            {
                cout<<vetSangue[i].nome<<endl;
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            if (vetSangue[i].tipo=="O")
            {
                cout<<vetSangue[i].nome<<endl;
            }
            
        }
        
    }else

        return 0;
}