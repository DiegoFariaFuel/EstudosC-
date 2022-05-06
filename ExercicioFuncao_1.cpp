/*
01.Crie um programa que recebe dois lados menores 
de um triângulo retângulo e uma 
função retorna o valor da hipotenusa.
*/

#include<iostream>
#include<math.h>

using namespace std;
ValorHipotenusa();

int main()
{
int cateto1 , cateto2;

 cout<<"Informe o Primeiro lado do triangulo";
 cin<<ValorHipotenusa();
 cout<<"Informe o Segundo lado do triangulo";
 cin>>ValorHipotenusa();


ValorHipotenusa(x,y);

cout<<"O valor da hipotenusa ="<<ValorHipotenusa();

}





int ValorHipotenusa(x,y)
{
int hipotenusa=0;
hipotenusa= pow(x,2)+ pow(y,2);

}return hipotenusa;