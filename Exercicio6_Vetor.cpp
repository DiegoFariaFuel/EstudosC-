#include<iostream>

using namespace std;


int main() 
{
int vetor[10],iMaior = 0, iMenor = 0;



        for (int i = 0; i < 10; i++)
        
        {
        
        cout<<"Informe valor: "<<i<<endl;
        cin>>vetor[i];
        
        
            if (vetor[i] > vetor[iMaior]) 
            {
                iMaior = vetor[i];
                
            }

        
            if (vetor[i] < vetor[iMenor]) 
            {
                iMenor = vetor[i];
            
            }

        
        }

        cout<<iMaior<<endl;
        cout<<iMenor<<endl;



    return 0;
}

