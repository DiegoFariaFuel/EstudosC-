#include<iostream>
#include<cmath>

using namespace std;

/*3. +Ler um conjunto de numeros reais, armazenando-o em vetor e 
     +calcular o quadrado dascomponentes deste vetor, armazenando o resultado em outro vetor. 
     +Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos*/


int main()
{    
     int vetorA[10];
     int vetorB[10];
      

          cout<<"Informe 10 numeros"<<endl;

               for (int a = 0; a <10; a++)
               {    
                   cin>>vetorA[a];                    
               }

               
               for (int i = 0; i < 10; i++)
               {
                     vetorB[i]=vetorA[i]*vetorA[i];
               }
               
               
               for (int x = 0; x < 10; x++)
               {    
                    cout<<"Vetores sem multiplicao"<<endl;
                    cout<<vetorA[x]<<endl;
               }

               
               for (int b = 0; b < 10; b++)
               {
                  cout<<"Vetor com multiplicacao"<<endl;
                  cout<<vetorB<<endl;
               }
               
               
               
}

