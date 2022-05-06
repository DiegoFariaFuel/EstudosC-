#include<iostream>

using namespace std;

/* 11. Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos numeros positivos desse vetor. */


int main()
{
    int vetor[10],Soma_positivo=0,Qtd_Negativos=0;

for (int i=0 ; i<10; i++)
{
    cout<<"Informe ("<<i+1<<") Numeros: ";
    cin>>vetor[i];
    
    if (vetor[i]>=0)
    {
        Soma_positivo+=vetor[i];
    }
    else
    {
        Qtd_Negativos++;
    }
    
}
cout<<"Soma de numeros positivos="<<Soma_positivo<<endl<<" Quantidade de numeros negativos= "<<Qtd_Negativos<<endl;

}