#include<iostream>

using namespace std;

/* 12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores. */

int main()
{

int vetor[5],maiorValor=-1,menorValor=1000,media=0;

cout<<"Informe 5 valores"<<endl;
for (int i = 0; i < 5 ; i++)
{
    cout<<"Informe ("<<i+1<<") =";
    cin>>vetor[i];    
    media+=vetor[i];
    media=media/5;
}


for (int i = 0; i < 5; i++)
{
    if(vetor[i]>maiorValor)
    {maiorValor=vetor[i];
    }

    if(vetor[i]<menorValor)
    {
     menorValor=vetor[i];
    }

}

cout<<"Media= "<<media<<" Maior valor= "<<maiorValor<<" Menor valor= "<<menorValor<<endl;

}