#include <iostream>

using namespace std;

struct aluno
{
    int matricula;
    string nome;
    float nota1;
    float nota2;
    char sex;
};

int main()
{

    int n;
    cin >> n;
    aluno vetAlunos[n];
    float mediaAll = 0;
    float mediaH = 0;
    float mediaM = 0;
    int contM = 0;
    int contH = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> vetAlunos[i].matricula;
        cin >> vetAlunos[i].nome;
        cin >> vetAlunos[i].nota1;
        cin >> vetAlunos[i].nota2;
        cin >> vetAlunos[i].sex;

        mediaAll += vetAlunos[i].nota1;
        mediaAll += vetAlunos[i].nota2;

        if (vetAlunos[i].sex == 'F')
        {
            mediaM += vetAlunos[i].nota1;
            mediaM += vetAlunos[i].nota2;
            contM += 2;
        }
        else
        {
            mediaH += vetAlunos[i].nota1;
            mediaH += vetAlunos[i].nota2;
            contH += 2;
        }
    }

    cout<<mediaAll/(n*2)<<endl;
    cout<<mediaH/(contH)<<endl;
    cout<<mediaM/(contM)<<endl;
    return 0;
}