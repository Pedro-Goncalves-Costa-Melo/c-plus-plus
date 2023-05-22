#include <iostream>

using namespace std;

int main(){

    string vetNomes[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>vetNomes[i];
    }
    int vetRefeicoes[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>vetRefeicoes[i];
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(vetRefeicoes[i]%10!=0)
        {
            int contRef10=0;
            contRef10=vetRefeicoes[i]/10;
            vetRefeicoes[i]=vetRefeicoes[i]-contRef10;
        }else if(vetRefeicoes[i]!=0)
        {
            int contRef10=0;
            contRef10=vetRefeicoes[i]/10;
            vetRefeicoes[i]=vetRefeicoes[i]-contRef10+1;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<vetNomes[i]<<" "<<vetRefeicoes[i]<<endl;
    }
    


    return 0;
}