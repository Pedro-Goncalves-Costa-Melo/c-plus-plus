#include <iostream>

using namespace std;


void escrita(int vet[], int tam){

    cout<<"[";
    for (int i = 0; i < tam; i++)
    {
        cout<<vet[i];
        if (i+1<tam)
        {
            cout<<", ";
        }
        
    }
    


    cout<<"]";

}
int main(){

    int n;
    cin>>n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vet[i];
    }
    
    escrita(vet,n);

    cout<<endl;

    return 0;
}