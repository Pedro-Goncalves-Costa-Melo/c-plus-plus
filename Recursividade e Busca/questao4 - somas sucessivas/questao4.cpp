#include <iostream>


using namespace std;

void soma(int n, int &n2, int &multiplicacao)
{
    if (n2==0 )
    {
        return;
    }
    
    n2--;
    multiplicacao+=n;
    return soma(n,n2,multiplicacao); 
}
int main(){

    int n;
    cin>>n;
    int n2;
    cin>>n2;
    int multiplicacao=0;

    soma(n,n2,multiplicacao);
    cout<<multiplicacao<<endl;

    return 0;
}