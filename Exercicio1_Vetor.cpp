#include<iostream>
#include<cmath>


/*Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 

O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.

(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posiçoes 
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

(c) Modifique o vetor na posiçao 4, atribuindo a esta posição o valor 100.

(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/
using namespace std;

int main()
{
  double soma;
  double VetorA[]={1 ,0 ,5 ,-2 ,-5 ,7 };



    soma=VetorA[0]+VetorA[1]+VetorA[5];

      cout<<"Soma das posicoes= "<<" "<<soma<<endl;
 
      cout<<"Mostrando o Vetor: "<<endl;
  
    for (int i = 0; i<=5; i++)
    {

      cout<<VetorA[i]<<endl;

    }
 

    for (int i = 0; i <=5; i++)
    {
      if (i==4)
      {
        VetorA[i]=100;
        cout<<i;
      }
      
    }
    
    
    cout<<"Vetor posicao 4= "<<VetorA[4]<<endl;

    cout<<"VALORES ATUAIS DO VETOR"<<endl; 
    
    for (int x= 0; x <=5; x++)
    {
       cout<<VetorA[x]<<endl;
    }
     


}