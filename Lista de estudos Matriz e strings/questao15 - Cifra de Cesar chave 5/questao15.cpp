#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string nomeArqv;
    cin>>nomeArqv;
    ifstream entrada(nomeArqv);

    ofstream saida("cifrado.txt");

    string textoPrincipal;
    while (getline(entrada,textoPrincipal))
    {
        
        for (unsigned i = 0; i < textoPrincipal.length(); i++)
        {
            if (textoPrincipal[i]=='V')
            {
                textoPrincipal[i]='A';
            }
            else if (textoPrincipal[i]=='W')
            {
                textoPrincipal[i]='B';
            }
            else if (textoPrincipal[i]=='X')
            {
                textoPrincipal[i]='C';
            }
            else if(textoPrincipal[i]=='Y')
            {
                textoPrincipal[i]='D';
            }
            else if (textoPrincipal[i]=='Z')
            {
                textoPrincipal[i]='E';
            }
            else if(textoPrincipal[i]!=' ' and textoPrincipal[i]!='\n')
            {
                textoPrincipal[i]+=5;
            }
            
            
        }
    
        saida<<textoPrincipal<<endl;
    }
    

    
    





}