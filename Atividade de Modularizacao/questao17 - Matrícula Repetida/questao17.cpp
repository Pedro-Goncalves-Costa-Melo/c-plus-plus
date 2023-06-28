#include <iostream>

using namespace std;

void calculoIgual(int vet1[], int vet2[]){

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vet1[i]==vet2[j])
            {
                cout<<vet1[i]<<endl;
            }
            
        }
        
    }
    


}
int main(){

    int vet1[15];
    for (int i = 0; i < 15; i++)
    {
        cin>>vet1[i];
    }
    int vet2[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>vet2[i];
    }
    
    calculoIgual(vet1, vet2);

    return 0;
}