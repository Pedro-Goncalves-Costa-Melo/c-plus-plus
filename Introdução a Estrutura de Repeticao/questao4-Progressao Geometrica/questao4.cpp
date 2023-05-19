#include <iostream>

using namespace std;

int main(){
    float R, soma=1;
    int N, cont=0;
    cin>>R>>N;

    cout<<"1"<<endl;

    while (cont<N-1)
    {
        cont++;
        soma*=R;
        cout<<soma<<endl;
    }
    


    return 0;
}