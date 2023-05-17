#include <iostream>

using namespace std;

int main(){

    string corTrue, corFalse;
    int numero;
    int alg1, alg2, alg3, alg4, alg5, alg6;

    cin>>corTrue>>corFalse>>numero;

    alg1=(numero/100000);
    alg2=(numero/10000) - (alg1*10);
    alg3=(numero/1000) - (alg1*100) - (alg2*10);  
    alg4=(numero/100) - (alg1*1000) - (alg2*100) - (alg3*10);
    alg5=(numero/10) - (alg1*10000) - (alg2*1000) - (alg3*100) - (alg4*10);
    alg6=(numero) - (alg1*100000) - (alg2*10000) - (alg3*1000) - (alg4*100) - (alg5*10);  

    if (alg1==alg6 and alg2==alg5 and alg3==alg4)
    {
        cout<<corTrue<<endl;
    }else{
        cout<<corFalse<<endl;
    }
    

    return 0;
}