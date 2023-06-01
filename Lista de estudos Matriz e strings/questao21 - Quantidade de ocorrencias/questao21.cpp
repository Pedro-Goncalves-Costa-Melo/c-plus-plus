#include <iostream>

using namespace std;

int main(){

    int n1;
    int n2;
    int n3;
    cin>>n1;
    string lista1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>lista1[i];
    }
    cin>>n2;
    string lista2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin>>lista2[i];
    }
    cin>>n3;
    string lista3[n3];
    for (int i = 0; i < n3; i++)
    {
        cin>>lista3[i];
    }
    



    int cont;
    for (int i = 0; i < n3; i++)
    {
        
        cont=0;
        for (int j = 0; j < n1; j++)
        {
            if (lista3[i]==lista1[j])
            {
                cont++;
            }
            
        }
        
        for (int k = 0; k < n2; k++)
        {
            if (lista3[i]==lista2[k])
            {
                cont++;
            }
            
        }
        
        cout<<cont<<" ";
    }
    
    cout<<endl;


    return 0;
}