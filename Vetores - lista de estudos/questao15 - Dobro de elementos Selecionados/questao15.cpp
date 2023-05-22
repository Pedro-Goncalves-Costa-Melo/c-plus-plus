#include <iostream>

using namespace std;

int main(){

    int N;
    cin>>N;
    float vetN[N];
    for (int i = 0; i < N; i++)
    {
        cin>>vetN[i];
    }
    int M;
    cin>> M;
    int vetM[M];
    for (int i = 0; i < M; i++)
    {
        cin>>vetM[i];
    }
    
    for (int i = 0; i < M; i++)
    {
        vetN[vetM[i]]*=2;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout<<vetN[i]<<" ";
    }
    

    return 0;
}