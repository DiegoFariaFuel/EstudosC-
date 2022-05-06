#include<iostream>

using namespace std;

/*  Fazer um programa para ler 5 valores e, em seguida, mostrar a posicao onde se encontram o maior e o menor valor.
*/

int main()
{
    int v[5],MaiorValor=-1,MenorValor=100000000,posicao=0,posicao1=0;

        for (int i = 0; i < 5; i++)
        {   
            cout<<"Informe "<<i+1<<" Valor:";
            cin>>v[i];

            if (v[i]>MaiorValor)
            {
            MaiorValor=v[i];
            posicao=i;

            }

            if (v[i]<MenorValor)
            {
                MenorValor=v[i];
                posicao1=i;
            }
            
        }
        posicao++;
        posicao1++;
    cout<<"Maior Valor esta na posicao= "<<posicao<<endl;
    cout<<"Menor Valor esta na posicao= "<<posicao1<<endl;

    return 0;


}