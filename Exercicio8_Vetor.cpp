#include <iostream>

using namespace std;



/* 8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/

int main()
{

int v[6];    

for (int i = 0; i < 6; i++)
{
  cout<<"Informe o valor: ";
  cin>>v[i];
}

cout<<"VETOR SEM MODIFICACAO"<<endl;
for (int i = 0; i < 6; i++)
{
    cout<<v[i]<<endl;
}

cout<<"VETOR ULTIMA POSICAO PARA A PRIMEIRA"<<endl;
for (int  i = 5; i >=0; i--)
{
    cout<<v[i]<<endl;
}


    


}