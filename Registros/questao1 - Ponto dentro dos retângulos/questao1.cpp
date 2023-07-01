#include <iostream>

using namespace std;
struct P1
{
    int x;
    int y;
};

struct retangulo
{
    P1 v1;
    P1 v2;
};


int main(){

    P1 ponto;
    cin>>ponto.x;
    cin>>ponto.y;

    int n;
    cin>>n;
    retangulo vetRetangulo[n];
    int cont=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vetRetangulo[i].v1.x;
        cin>>vetRetangulo[i].v1.y;
        cin>>vetRetangulo[i].v2.x;
        cin>>vetRetangulo[i].v2.y;

        if (ponto.x >=vetRetangulo[i].v1.x and ponto.x<=vetRetangulo[i].v2.x and ponto.y>=vetRetangulo[i].v1.y and ponto.y<=vetRetangulo[i].v2.y)
        {
            cont++;
        }
        
    }
    cout<<cont;

    return 0;
}