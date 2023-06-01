#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    string palavras[n];
    unsigned TamanhoMaior=0;
    for (int i = 0; i < n; i++)
    {
        cin>>palavras[i];
        if (palavras[i].length()>TamanhoMaior)
        {
            TamanhoMaior=palavras[i].length();
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (unsigned j = 0; j < TamanhoMaior-palavras[i].length(); j++)
        {
            cout<<"*";
        }
        cout<<palavras[i]<<endl;
    }
    



    return 0;
}