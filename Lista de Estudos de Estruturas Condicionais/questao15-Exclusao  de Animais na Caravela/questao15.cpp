#include <iostream>

using namespace std;

int main(){

    int carga;
    int galinha, vaca, cavalo;
    cin>>carga>>cavalo>>vaca>>galinha;


    if (carga>galinha*2)
    {
        carga-=galinha*2;
        galinha=0;
    } else
    {
        while (carga>=2)
        {
            carga-=2;
            galinha--;
        }
        
    }
    
    if (carga>vaca*150)
    {
        carga-=vaca*150;
        vaca=0;
    }else 
    {
        while (carga>=150)
        {
            carga-=150;
            vaca--;
        }
    }
    
    if (carga>cavalo*250)
    {
        carga-=cavalo*250;
        cavalo=0;
    }else
    {
        while (carga>=250)
        {
            carga-=250;
            cavalo--;
        }
        
    }
    
    cout<<cavalo<<endl;
    cout<<vaca<<endl;
    cout<<galinha<<endl;
    
    
    



    return 0;
}