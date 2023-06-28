#include <iostream>

using namespace std;

void calculo(int vet1[], int tam, int& cont){

    float media=0;
    for (int i = 0; i < tam; i++)
    {
        media+=vet1[i];
    }
    cont=media;
    media/=(float)tam;
    cout<<media<<endl;
    
}
int main(){

    int n;
    cin>>n;
    string blocos[3];
    int vet1[n],vet2[n],vet3[n];
    cin>>blocos[0];
    for (int i = 0; i < n; i++)
    {
        cin>>vet1[i];
    }

    cin>>blocos[1];
    for (int i = 0; i < n; i++)
    {
        cin>>vet2[i];
    }
    cin>>blocos[2];
    for (int i = 0; i < n; i++)
    {
        cin>>vet3[i];
    }
    int cont1;
    int cont2;
    int cont3;

    calculo(vet1,n,cont1);
    calculo(vet2,n,cont2);
    calculo(vet3,n,cont3);
    if (cont1>cont2 and cont1>cont3)
    {
        cout<<blocos[0]<<" "<<cont1<<endl;
    }
    else if (cont2>cont1 and cont2> cont3)
    {
        cout<<blocos[1]<<" "<<cont2<<endl;
    }else
    cout<<blocos[2]<<" "<<cont3<<endl;
    
    

    return 0;
}