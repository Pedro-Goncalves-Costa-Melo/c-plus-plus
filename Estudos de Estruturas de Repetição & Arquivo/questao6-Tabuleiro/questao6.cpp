#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream saida("jogo.txt");

    int N;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((j+i)%2==0)
            {
                saida<<".";
            }else{
                saida<<"#";
            }
        }
        saida<<endl;
    }
    


    return 0;
}