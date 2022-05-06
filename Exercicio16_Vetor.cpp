#include<iostream>

using namespace std;

/*16. Faca um programa que leia um vetor de 5 posicoes para numeros reais e, depois,um codigo inteiro. 

Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; 
Se for 2, mostre o vetor na ordem inversa. 
Caso, o codigo for diferente de 1 e 2 escreva uma mensagem informando que o codigo e invalido. */


int main(){
   int vetor[5],cod=0;
    cout<<"Codigo =0 finaliza programa"<<endl;
    cout<<"Informe o codigo: ";
    cin>>cod;
    
        if (cod==1){
         for (int i = 0; i < 5; i++){
            cout<<"Informe a ["<<i+1<<"]: ";
            cin>>vetor[i];   
         }

         cout<<"Vetor na ordem direta"<<endl; 
        
        for (int i = 0; i < 5; i++){
             
           cout<<vetor[i]<<endl;  
          }
        }
        
        if (cod==2)
        {
            for (int i = 0; i < 5; i++){
                cout<<"Informe a ["<<i+1<<"]: ";
                cin>>vetor[i];
            }
            
            cout<<"Vetor na ordem Inversa"<<endl;
            for (int i = 4; i >=0; i--){
                cout<<vetor[i]<<endl;
            }
            
        }
        
    else
    {
    cout<<"Opcao invalida";
    }


}
