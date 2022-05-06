#include <iostream>

using namespace std;

/* Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais e os escreva na tela.*/



int main() 
{
    int i, j;

    int vetor[10];
    
    for (i = 0; i < 10; i++) 
    {
        cout<<"Entre com o elemento["<<i+1<<"] :";
        cin>>vetor[i];
    }


    for (i = 0; i < 10; i++){

       for ( j = 0; j < 10; j++){

           if (i!=j){

               if (vetor[i]==vetor[j]){
                   cout<<"Repetidos: "<<vetor[i]<<" linha:"<<i<<endl;                
                if (/* condition */)
                {
                    /* code */
                }
                
                  }
                  
            
            }
                
      }
    }


    
      

}