#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string nomeArqv;
    cin>>nomeArqv;
    ifstream entrada(nomeArqv);
    ofstream saida("cifrado.txt");

    string linha;
    while (getline(entrada,linha))
    {
        for (unsigned i = 0; i < linha.length(); i++)
        {
            switch (linha[i])
            {
            case 'A':
                linha[i]='Z';
                break;
            case 'B':
                linha[i]='Y';
                break;
            case 'C':
                linha[i]='X';
                break;
            case 'D':
                linha[i]='W';
                break;
            case 'E':
                linha[i]='V';
                break;
            case 'F':
                linha[i]='U';
                break;
            case 'G':
                linha[i]='T';
                break;
            case 'H':
                linha[i]='S';
                break;
            case 'I':
                linha[i]='R';
                break;
            case 'J':
                linha[i]='Q';
                break;
            case 'K':
                linha[i]='P';
                break;
            case 'L':
                linha[i]='O';
                break;
            case 'M':
                linha[i]='N';
                break;
            case 'N':
                linha[i]='M';
                break;
            case 'O':
                linha[i]='L';
                break;
            case 'P':
                linha[i]='K';
                break;
            case 'Q':
                linha[i]='J';
                break;
            case 'R':
                linha[i]='I';
                break;
            case 'S':
                linha[i]='H';
                break;
            case 'T':
                linha[i]='G';
                break;
            case 'U':
                linha[i]='F';
                break;
            case 'V':
                linha[i]='E';
                break;
            case 'W':
                linha[i]='D';
                break;
            case 'X':
                linha[i]='C';
                break;
            case 'Y':
                linha[i]='B';
                break;
            case 'Z':
                linha[i]='A';
                break;
            default:
                break;
            }
        }
        saida<<linha<<endl;
    }
    

    return 0;
}