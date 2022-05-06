#include<iostream>

using namespace std;

 /* 10. Faca um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.  */

int main()
{
    int v[15],tot=0,media=0;

    for (int i=0 ; i<15 ; i++)
    {
    cout<<"Informe a nota do "<<i+1<<" aluno: ";
    cin>>v[i];
    media+=v[i];   
    }
    
    tot=media/15;
    
    cout<<"Media= "<<tot;
}