#include <iostream>

using namespace std;

float conta(string vet[], int tam)
{
    float soma=0;
    float AuxCha = 0, AuxCafe = 0, AuxCoca = 0, AuxBiscoito = 0, AuxPao = 0, AuxSalgado = 0;
    int contCha = 0, contCafe = 0, contCoca = 0, contBiscoito = 0, contPao = 0, contSalgado = 0;
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] == "cha")
        {
            contCha++;
        }
        else if (vet[i] == "cafe")
        {
            contCafe++;
        }
        else if (vet[i] == "coca")
        {
            contCoca++;
        }
        else if (vet[i] == "biscoito")
        {
            contBiscoito++;
        }
        else if (vet[i] == "pao")
        {
            contPao++;
        }
        else if (vet[i] == "salgado")
        {
            contSalgado++;
        }
    }
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] == "cha")
        {
            AuxCha += 4.5;
        }
        else if (vet[i] == "cafe")
        {
            AuxCafe += 3.25;
        }
        else if (vet[i] == "coca")
        {
            AuxCoca += 6.9;
        }
        else if (vet[i] == "biscoito")
        {
            AuxBiscoito += 2.75;
        }
        else if (vet[i] == "pao")
        {
            AuxPao += 0.8;
        }
        else if (vet[i] == "salgado")
        {
            AuxSalgado += 3.5;
        }
    }

    if (contCha == 2)
    {
        AuxCha *= 0.95;
        soma += AuxCha;
    }
    else if (contCha == 3 or contCha == 4)
    {
        AuxCha *= 0.9;
        soma += AuxCha;
    }
    else if (contCha >= 5)
    {
        AuxCha *= 0.85;
        soma += AuxCha;
    }
    else
    {
        soma += AuxCha;
    }

    if (contCafe == 2)
    {
        AuxCafe *= 0.95;
        soma += AuxCafe;
    }
    else if (contCafe == 3 or contCafe == 4)
    {
        AuxCafe *= 0.9;
        soma += AuxCafe;
    }
    else if (contCafe >= 5)
    {
        AuxCafe *= 0.85;
        soma += AuxCafe;
    }
    else
    {
        soma += AuxCafe;
    }


    if (contCoca == 2)
    {
        AuxCoca *= 0.95;
        soma += AuxCoca;
    }
    else if (contCoca == 3 or contCoca == 4)
    {
        AuxCoca *= 0.9;
        soma += AuxCoca;
    }
    else if (contCoca >= 5)
    {
        AuxCoca *= 0.85;
        soma += AuxCoca;
    }
    else
    {
        soma += AuxCoca;
    }


    if (contBiscoito == 2)
    {
        AuxBiscoito *= 0.95;
        soma += AuxBiscoito;
    }
    else if (contBiscoito == 3 or contBiscoito == 4)
    {
        AuxBiscoito *= 0.9;
        soma += AuxBiscoito;
    }
    else if (contBiscoito >= 5)
    {
        AuxBiscoito *= 0.85;
        soma += AuxBiscoito;
    }
    else
    {
        soma += AuxBiscoito;
    }


    if (contPao == 2)
    {
        AuxPao *= 0.95;
        soma += AuxPao;
    }
    else if (contPao == 3 or contPao == 4)
    {
        AuxPao *= 0.9;
        soma += AuxPao;
    }
    else if (contPao >= 5)
    {
        AuxPao *= 0.85;
        soma += AuxPao;
    }
    else
    {
        soma += AuxPao;
    }


    if (contSalgado == 2)
    {
        AuxSalgado *= 0.95;
        soma += AuxSalgado;
    }
    else if (contSalgado == 3 or contSalgado == 4)
    {
        AuxSalgado *= 0.9;
        soma += AuxSalgado;
    }
    else if (contSalgado >= 5)
    {
        AuxSalgado *= 0.85;
        soma += AuxSalgado;
    }
    else
    {
        soma += AuxSalgado;
    }

    return soma;
}
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    string vet[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,vet[i]);
    }

    cout << conta(vet,n) << endl;

    return 0;
}