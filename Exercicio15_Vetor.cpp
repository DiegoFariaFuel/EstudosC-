#include<iostream>
#include<stdbool.h>

using namespace std;


/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos.*/

int main()
{
    int tamanho=0;

    int *vetor = new int[tamanho];

    bool repetido;

    cout << "Informe o tamanho do vetor";
    cin >> tamanho;

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Informe valor da [" << i + 1 << "] :";
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        repetido = false;

        for (int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                repetido = true;
                break;
            }

            if (!repetido)
            {
                cout << vetor[i] << endl;
                if(vetor[i]!=vetor[j]){
                    cout<<"Elementos não repetidos: "<<vetor[i]<<endl;
                }
            }
        }
    }
}