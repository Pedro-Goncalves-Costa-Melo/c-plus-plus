#include <iostream>

using namespace std;

int main(){

    string DNA;
    cin>>DNA;
    
    double soma=0;
    for (unsigned i = 0; i < DNA.length(); i++)
    {
        switch (DNA[i])
        {
        case 'A':
            soma+=71.03711;
            soma+=18.01056; 
            break;
        case 'T':
            soma+=101.04768;
            soma+=18.01056;
            break;
        case 'C':
            soma+=103.00919;
            soma+=18.01056;
            break;
        case 'G':
            soma+=57.02146;
            soma+=18.01056;
            break;
        
        default:
            break;
        }
    }
    
    cout<<soma<<endl;

    return 0;
}