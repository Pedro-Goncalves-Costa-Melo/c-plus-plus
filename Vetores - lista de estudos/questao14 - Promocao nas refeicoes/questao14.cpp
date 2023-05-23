#include <iostream>

using namespace std;

int main(){

    string Nomes[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>Nomes[i];
    }
    int Refeicoes[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>Refeicoes[i];
        
    }


    
    
    for (int i = 0; i < 10; i++)
    {
       
        int contRef10=0;
        contRef10=Refeicoes[i]/11;
        Refeicoes[i]=Refeicoes[i]-contRef10;

    }
    
    
    for (int i = 0; i < 10; i++)
    {
        cout<<Nomes[i]<<" "<<Refeicoes[i]<<endl;
    }
    


    return 0;
}