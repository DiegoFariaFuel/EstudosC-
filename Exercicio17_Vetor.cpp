#include<iostream>

using namespace std;

/*Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possuırem
valores negativos.
 */


int main(){
int v[10];

for (int  i = 0; i < 5; i++)
{
   cout<<"Informe ["<<i+1<<"]:";
   cin>>v[i];
}

    for (int i = 0; i < 5; i++)
    {
        if (v[i]<0)
        {
         v[i]=0;
         cout<<"Posicao: "<<i+1<<" Trocado por ["<<v[i]<<"]"<<endl;

        }
        else
        cout<<"Posicao: "<<i+1<<" Elementos= "<<v[i]<<endl;
    
    }
}