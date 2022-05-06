#include<iostream>

using namespace std;

int main()
{
    long long operacao,primeiroDado,segundoDado,resultado;
    

    cout<<"\n\noperacao=1 Adicao";
    cout<<"\noperacao=2 subtracao\n";
    cout<<"operacao=3 multiplicacao\n";
    cout<<"operacao=4 divisao\n\n";

    cout<<"informe a operacao : ";
    cin>>operacao;

    cout<<"informe primeiro numero :";
    cin>>primeiroDado;
    
    cout<<"informe segundo numero : ";
    cin>>segundoDado;
        


while (operacao!=0)
{

    if (operacao==1)
    {
    resultado = primeiroDado+ segundoDado;
    cout<<"adicao="<<resultado<<endl;
    }
    
    if (operacao==2)
    {
        resultado = primeiroDado- segundoDado;
        cout<<"subtracao="<<resultado<<endl;
    }
    
    if (operacao==3)
    {
    resultado = primeiroDado* segundoDado;
    cout<<"multiplicacao="<<resultado<<endl;
    }

    if (operacao==4)
    {
        resultado = primeiroDado/ segundoDado;
        cout<<"divisao="<<resultado;
    }

    cout<<"\n  operacao=1 Adicao";
    cout<<"\n  operacao=2 subtracao\n";
    cout<<"  operacao=3 multiplicacao\n";
    cout<<"  operacao=4 divisao\n";
    cout<<"  operacao=0 encerrar\n";

    cout<<"informe a operacao : ";
    cin>>operacao;

    cout<<"informe primeiro numero :";
    cin>>primeiroDado;
    
    cout<<"informe segundo numero : ";
    cin>>segundoDado;
}
}