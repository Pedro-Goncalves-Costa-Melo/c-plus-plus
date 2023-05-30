#include <iostream>

using namespace std;

int main(){

    int n, pos;
  cin >> n;

  int tamanho = n * 2;
  int v1[n], v2[tamanho] = {-1};

  for (int i = 0; i < tamanho; i++)
  {
    v2[i] = -1;
  }

  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> v2[i];
  }

  cin >> pos;

  for (int i = 0; i < n; i++)
  {
    for (int j = tamanho - 1; j >= pos; j--)
    {
      v2[j] = v2[j - 1];
    }

    v2[pos] = v1[i];

    for (int j = 0; j < tamanho; j++)
    {
      if (v2[j] != -1)
      {
        cout << v2[j] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}