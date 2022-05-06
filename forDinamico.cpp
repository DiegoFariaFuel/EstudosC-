#include<iostream>

using namespace std;

int main()
{
   int tamanho;

   int *vetor= new int[tamanho];

   cout<<"Informe o tamanho do vetor: ";
   cin>>tamanho;

        for (int i = 0; i <tamanho; i++)
        {
            cout<<"Informe valor: ";
            cin>>vetor[i];
            
            
            
        }

      for (int i = 0; i <tamanho; i++)
      {
        cout<<vetor[i]<<endl;
      }
   
}