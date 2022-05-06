/*1. Leia uma matriz 4x4, conte e escreva
 quantos valores maiores que 10 ela possui.
*/

#include <iostream>

using namespace std;

int main()
{
    double matriz[4][4], contagem=0;
   
    //preenchimento da matriz
    for(int linha=0; linha<4; linha++)
    {
        for(int coluna=0; coluna<4; coluna++)
        {
           cout<<"\n \n linha  = "<<linha+1<<"\n coluna = "<<coluna+1<<"\n insira =";

           cin>> matriz [linha] [coluna];
        }
    }
   
     //contagem > 10
    for(int linha=0; linha<4; linha++)
       {
        for(int coluna=0; coluna<4; coluna++)
        {    
            if(matriz [linha] [coluna] > 10)
            {
            contagem++;
            }
        }
 
       
       }
        
       if(contagem>0)
       {
       cout<<"\n\n Existem na matriz numeros maiores que 10"<<"\n Contagem ="<<contagem;
       } 

    return 0;
}