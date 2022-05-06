#include<iostream>

using namespace std;

/*7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima 
o vetor, o maior elemento e a posicao que ele se encontra.*/

int main()
{
    int v[10],m=0,p=0;

    for (int i = 0; i < 10; i++)
    {
      cout<<"Informe um numero:  ("<<i<<")"<<endl;
      cin>>v[i];

      if (v[i] > v[m])
      {   
          m=v[i];
          p=i;
      }
        
    }

    cout<<"Maior posicao :"<<p<<"   /Maior numero :"<<m;




}