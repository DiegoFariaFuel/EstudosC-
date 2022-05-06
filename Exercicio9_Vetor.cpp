#include<iostream>

using namespace std;

/* 9. Crie um programa que le 6 vetores valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.
 */


int main()
{
    int v[6];

    

for (int i=0; i<6 ; i++)
{
    cout<<"Digite o valor: ";
    cin>>v[i];
}

cout<<"Vetor na ordem inversa"<<endl;
for (int i = 5; i>=0 ; i--)
{
    cout<<v[i]<<endl;
}

cout<<"Pares do vetor"<<endl;
for (int i=0; i<6 ; i++)
{
    if(v[i]%2==0)
    {
        cout<<v[i]<<endl;
    }
}

cout<<"Impares do Vetor"<<endl;
for (int i=0; i<6 ; i++)
{
    if(v[i]%2!=0)
    {
    cout<<v[i]<<endl;
    }
}

}