#include <iostream>

using namespace std;

int main(){

    string vetNomes[5];
    float vetSalarios[5];
    int vetAnos[5];


    int recebeAumento=0;
    int naoRecebeAumento=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>vetNomes[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cin>>vetSalarios[i];
        if (vetSalarios[i]<=400)
        {
            recebeAumento++;
        }else   
            naoRecebeAumento++;
        
    }

    for (int i = 0; i < 5; i++)
    {
        cin>>vetAnos[i];
        if (vetAnos[i]>=5)
        {
            recebeAumento++;
        }else
            naoRecebeAumento++;
        
    }

    if (naoRecebeAumento!=0)
    {
        cout<<"SEM REAJUSTE:"<<endl;
    
    
        for (int i = 0; i < 5; i++)
        {
            if (vetSalarios[i]>400 and vetAnos[i]<5)
            {
                cout<<vetNomes[i]<<endl;
            }
        
        }
    
        cout<<endl;
    }
    
    if(recebeAumento!=0)
    {
        cout<<"COM REAJUSTE:"<<endl;

        for (int i = 0; i < 5; i++)
        {
            if (vetSalarios[i]<=400 and vetAnos[i]>=5)
            {
                cout<<vetNomes[i];
                cout<<" "<<vetSalarios[i]*1.35<<endl;
            }else if (vetSalarios[i]<=400)
            {
                cout<<vetNomes[i];
                cout<<" "<<vetSalarios[i]*1.15<<endl;
            }else if (vetAnos[i]>=5)
            {
                cout<<vetNomes[i];
                cout<<" "<<vetSalarios[i]*1.25<<endl;
            }
        
        
        
        }
    }


    return 0;
}