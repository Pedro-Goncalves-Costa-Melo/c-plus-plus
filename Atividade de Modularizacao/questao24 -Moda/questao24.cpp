#include <iostream>

using namespace std;

int moda(int vet[], int tam){

    int valorRepetido;
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,cont7=0,cont8=0,cont9=0,cont10=0;
    int aux;
    for (int i = 0; i < tam; i++)
    {
        aux=vet[i];
        switch (aux)
        {
        case 1:
            cont1++;
            break;
        case 2:
            cont2++;
            break;
        case 3:
            cont3++;
            break;
        case 4:
            cont4++;
            break;
        case 5:
            cont5++;
            break;
        case 6:
            cont6++;
            break;
        case 7:
            cont7++;
            break;
        case 8:
            cont8++;
            break;
        case 9:
            cont9++;
            break;
        case 10:
            cont10++;
            break;
        default:
            break;
        }
    }
    int maior=0;
    valorRepetido=0;
    if (cont1>maior)
    {
        maior=cont1;
        valorRepetido=1;
    }
    
    if (cont2>maior)
    {
        maior=cont2;
        valorRepetido=2;
    } if (cont3>maior)
    {
        maior=cont3;
        valorRepetido=3;
    } if (cont4>maior)
    {
        maior=cont4;
        valorRepetido=4;
    } if (cont5>maior)
    {
        maior=cont5;
        valorRepetido=5;
    } if (cont6>maior)
    {
        maior=cont6;
        valorRepetido=6;
    } if (cont7>maior)
    {
        maior=cont7;
        valorRepetido=7;
    } if (cont8>maior)
    {
        maior=cont8;
        valorRepetido=8;
    } if (cont9>maior)
    {
        maior=cont9;
        valorRepetido=9;
    } if (cont10>maior)
    {
        maior=cont10;
        valorRepetido=10;
    }
    

    return valorRepetido;
}
int main(){

    int n;
    cin>>n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    cout<<moda(vet, n)<<endl;

    return 0;
}