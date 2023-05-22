#include <iostream>

using namespace std; 

int main(){

    float vet[10];
    int contPosi=0;
    float somaNeg=0;
    for (int i = 0; i < 10; i++)
    {
        cin>>vet[i];
        if (vet[i]>=0)
        {
            contPosi++;
        }else
        {
            somaNeg+=vet[i];
        }
        
    }
    cout<<contPosi<<endl<<somaNeg<<endl;



    return 0;
}