#include<iostream>

using namespace std;

/*18.Faca um programa que leia um vetor de 10 numeros. Leia um numero x.
Conte os multiplos de um numero inteiro x num vetor e mostre-os na tela.
*/

int main()
{

    int v[10];

    for (int i = 0; i < 4; i++)
    {
        cout << "Insira 10 numeros Posicao: " << i + 1 << " =";
        cin >> v[i];
    }

    for (int i = 0; i < 4; i++)
    {

        if (v[i] % 2 == 0)
        {
            cout << "NUMERO MULTIPLO DE 2: " << v[i]<<"Posicao: "<<i+1<<endl;
        }

        if (v[i] % 3 == 0)
        {
            cout << "NUMERO MULTIPLO DE 3: " << v[i] <<"Posicao: "<<i+1<<endl;
        }

        if (v[i] % 4 == 0)
        {
            cout << "NUMERO MULTIPLO DE 4: "<< v[i] <<"Posicao: "<<i+1<<endl;
        }
    }
}
