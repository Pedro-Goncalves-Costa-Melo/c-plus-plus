#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    char vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    char Lim1, Lim2;
    cin>>Lim1;
    cin>>Lim2;
    


    for (int i = 0; i < 3; i++)
    {
        if (vet[i]==Lim1 or vet[i]==Lim2)
        {
            int j=i+1;
            while (vet[j]!=Lim1 and vet[j]!=Lim2)
            {
                cout<<vet[j]<<" ";
                j++;
            }
            
        }
        
    }
    

    return 0;
}