#include <iostream>

using namespace std;
struct entrevistado
{
    char sex;
    int idade;
    char resp;
};

int main(){

    int n;
    cin>>n;
    entrevistado vetEntrevistado[n];


    int contS=0;
    int contN=0;
    int cont18Like=0;
    int contNot18NotLike=0;
    int cont18FemNotLike=0;
    int contNot18MascLike=0;


    for (int i = 0; i < n; i++)
    {
        cin>>vetEntrevistado[i].sex;
        cin>>vetEntrevistado[i].idade;
        cin>>vetEntrevistado[i].resp;

        if (vetEntrevistado[i].resp=='S')
        {
            contS++;
            if (vetEntrevistado[i].idade>18)
            {
                cont18Like++;
            }
            
            if (vetEntrevistado[i].sex=='M' and vetEntrevistado[i].idade<18)
            {
                contNot18MascLike++;
            }
            
            
        }
        else
        {
            contN++;
            if (vetEntrevistado[i].idade<18)
            {
                contNot18NotLike++;
            }

            if (vetEntrevistado[i].sex=='F' and vetEntrevistado[i].idade>18)
            {
                cont18FemNotLike++;
            }
            
            
        }
        
    }
    
    cout<< contS<<endl;
    cout<< contN<<endl;
    cout<< cont18Like<<endl;
    cout<< contNot18NotLike<<endl;
    cout<< cont18FemNotLike<<endl;
    cout<< contNot18MascLike<<endl;

    return 0;
}