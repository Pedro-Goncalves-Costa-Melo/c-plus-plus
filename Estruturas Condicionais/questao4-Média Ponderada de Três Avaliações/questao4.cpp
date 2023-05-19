#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float NL,NS,NF,NL1,NS1,NF1,media;
    cin>>NL>>NS>>NF;

    NL1=NL*2;
    NS1=NS*3;
    NF1=NF*5;
    media=(NL1+NS1+NF1)/10;

    if (media>=8)
    {
        cout << media <<endl <<"A"<<endl;
    }
    if (media<8 and media>=7)
    {
        cout << media << endl <<"B"<<endl;
    }
    if (media<7 and media>=6)
    {
        cout << media << endl <<"C"<<endl;
    }
    if (media<6 and media>=5)
    {
        cout << media << endl <<"D"<<endl;
    }
    if (media <5 and media >=0)
    {
        cout << media << endl <<"E"<<endl;
    }
    
    

    return 0;
}