#include<iostream>

using namespace std;


float funcao(float X)
{
    
float resultado=(X*X)-(3*X)+5;
return resultado;
}

 int fatorial(int fator)
        {
        int total;
        
        for (int i=fator; fator<=1 ; fator--)
        {
            total=fator*i;
        }
        

        return total;

        }


int main()
{ 
 
  float x,tot;
  int f,resultados;

  cout<<"infome o valor de x: ";
  cin>>x;
  
tot=funcao(x);

cout<<"valor da funcao: "<<tot;

cout<<"Informe o numero fatorial:  ";
cin>>f;

resultados=fatorial(f);

cout<<"Fatorial "<<resultados;

}

      