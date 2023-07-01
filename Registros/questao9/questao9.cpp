#include <iostream>
#include <cmath>

using namespace std;

struct circulo
{
    float raio;
    float perimetro;
    float area;
};

struct quadrado
{
    float lado1;
    float lado2;
    float perimetro;
    float area;
};

struct triangulo
{
    float lado1;
    float lado2;
    float lado3;
    float area;
    float perimetro;
};

struct resposta
{
    string nome;
    float perimetro;
    float area;
};

int main()
{

    resposta vetR[5];
    for (int i = 0; i < 5; i++)
    {
        char A;
        cin >> A;

        switch (A)
        {
        case 'C':
            circulo c;
            cin >> c.raio;

            c.perimetro = 2 * M_PI * c.raio;
            c.area = c.raio * c.raio * M_PI;

            vetR[i].nome = "Circulo";
            vetR[i].area = c.area;
            vetR[i].perimetro = c.perimetro;
            break;
        case 'T':
            triangulo t;
            cin >> t.lado1;
            cin >> t.lado2;
            cin >> t.lado3;

            t.perimetro = t.lado1 + t.lado2 + t.lado3;
            t.area = sqrt(t.perimetro/2 * (t.perimetro/2 - t.lado1) * (t.perimetro/2 - t.lado2) * (t.perimetro/2 - t.lado3));

            vetR[i].nome = "Triangulo";
            vetR[i].area = t.area;
            vetR[i].perimetro = t.perimetro;

            break;
        case 'R':
            quadrado r;
            cin >> r.lado1;
            cin >> r.lado2;

            r.perimetro = r.lado1 + r.lado1 + r.lado2 + r.lado2;
            r.area = r.lado1 * r.lado2;

            vetR[i].nome = "Retangulo";
            vetR[i].area = r.area;
            vetR[i].perimetro = r.perimetro;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vetR[i].nome<<" "<<vetR[i].perimetro<<" "<<vetR[i].area<<endl;
    }

    return 0;
}