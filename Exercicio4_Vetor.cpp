#include<iostream>
#include <locale.h>

using namespace std;


/*4. Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores X e Y quaisquer 
correspondentes a duas posicoes no vetor. Ao final seu programa devera escrever a soma dos valores encontrados
 nas respectivas posicoes  X e Y .*/


int main()
{

    setlocale(LC_ALL, "Portuguese"); //usado apenas para imprimir caracteres especiais...


    int vetor[8];
    int x,y,soma;
    
            for(int i=1 ;i<=8 ;i++)
            {

            cout<<"Digite o vetor: ";
            cin>>vetor[i];

            }
             
	    x=vetor[3]; //especificando qual posicao de vetor sera imprimida e somada com Y.
            y=vetor[1]; //especificando qual posicao de vetor sera imprimida e somada com X.
        
	        cout<<"O valor do vetor X e: "<<x<<endl;
                cout<<"O valor do vetor Y e: "<<y<<endl;
        
	soma=vetor[3]+vetor[1];

        cout<<"\n A soma de X e Y e: "<<soma;

return 0;
}