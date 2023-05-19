#include <iostream>
#include <string>

using namespace std;

int main()
{
    int NumeroFichas, contMasc=0, contFem=0, QuantidadeFichas;
    float ValorTemp, SomaMasc = 0, SomaFem = 0, AlturaFem=0, AlturaMasc=0, AlturaAll=0, AlturaBaixo=__FLT_MAX__;
    string GeneroTemp;

    cin >> NumeroFichas;
    QuantidadeFichas=NumeroFichas;
    while (NumeroFichas != 0)
    {
        NumeroFichas--;
        cin >> ValorTemp;
        cin >> GeneroTemp;

        if (GeneroTemp == "m")
        {
            contMasc++;
            SomaMasc += ValorTemp;
        }
        else
        {   
            contFem++;
            SomaFem += ValorTemp;
        }

        if (ValorTemp>=AlturaAll)
        {
            AlturaAll=ValorTemp;
        }

        if (ValorTemp<=AlturaBaixo)
        {
            AlturaBaixo=ValorTemp;
        }
        

        if (ValorTemp>AlturaMasc and GeneroTemp=="m")
        {
            AlturaMasc=ValorTemp;
        } else if(ValorTemp>AlturaFem and GeneroTemp=="f")
        {
            AlturaFem=ValorTemp;
        }
        
        

    }

    cout<<AlturaAll<<endl;
    cout<<AlturaBaixo<<endl;
    if (contFem!=0)
    {
        cout<<SomaFem/contFem<<endl;
    } else {
        cout<< "erro"  <<endl;
    }
    if (contMasc!=0){
        cout<<SomaMasc/contMasc<<endl;
    } else{
        cout << "erro"<<endl;
    }
    cout<< (SomaFem+SomaMasc)/QuantidadeFichas<<endl;
    
    
    return 0;
}