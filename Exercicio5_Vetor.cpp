#include<iostream>

using namespace std;

/*5. Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.*/


int main()

{

    int vector[10],i,soma=0
    ;

            for(i=0;i<10;++i)
            {
                
                cout<<"Digite a posicao:  "<<i<<endl;
                cin>>vector[i];

                if ((vector[i] % 2)==0)
                {
                  
                  cout<<"Total de numeros"<<vector[i];
                  soma++;
                }

            }
        cout<<"Total de numeros pares"<<soma;

system("pause");


}