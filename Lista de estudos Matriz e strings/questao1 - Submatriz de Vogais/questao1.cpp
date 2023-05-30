#include <iostream>

using namespace std;

int main(){

    int tamanho;
    cin>>tamanho;

    char matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            cin>>matriz[i][j];
        }
        
    }
    

    for (int i = 0; i < tamanho-1; i++)
    {
        for (int j = 0; j < tamanho-1; j++)
        {
            if (matriz[i][j]=='A' or
                matriz[i][j]=='E' or
                matriz[i][j]=='I' or
                matriz[i][j]=='O' or
                matriz[i][j]=='U')
            {
                if (matriz[i][j+1]=='A' or 
                    matriz[i][j+1]=='E' or
                    matriz[i][j+1]=='I' or
                    matriz[i][j+1]=='O' or
                    matriz[i][j+1]=='U')
                {
                    if (matriz[i+1][j]=='A' or 
                    matriz[i+1][j]=='E' or
                    matriz[i+1][j]=='I' or
                    matriz[i+1][j]=='O' or
                    matriz[i+1][j]=='U')
                    {
                        if (matriz[i+1][j+1]=='A' or 
                        matriz[i+1][j+1]=='E' or
                        matriz[i+1][j+1]=='I' or
                        matriz[i+1][j+1]=='O' or
                        matriz[i+1][j+1]=='U')
                        {
                            cout<<matriz[i][j]<<" "<<matriz[i][j+1]<<endl<<matriz[i+1][j]<<" "<<matriz[i+1][j+1]<<endl;
                            return 0;
                        }
                    }
                }
                
            }
            
        }
        
    }
    
    
    cout<<"submatriz nao encontrada"<<endl;
    
    
    
    return 0;
}