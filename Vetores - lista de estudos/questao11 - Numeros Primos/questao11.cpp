#include <iostream>

using namespace std;

int main(){

    int vet[9];

    for (int i = 0; i < 9; i++)
    {
        cin>>vet[i];
    }
    
    for (int i = 0; i < 9; i++)
    {
        int j = 2;
        bool primo=true;
        while ( j < vet[i] and primo)
        {
            if (vet[i]%j==0)
            {
                primo=false;
            }
            j++;
        }
        if (primo)
        {
            cout<<vet[i]<<" "<<i<<endl;
        }
        
    }
    
    


    return 0;
}