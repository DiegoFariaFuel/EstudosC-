#include<iostream>

using namespace std;

//Tendo como entrada a altura e o sexo 
//(codificado da seguinte forma:1:feminino 2:masculino) 
//de uma pessoa, construa um programa que
//calcule e imprima seu peso ideal, utilizando as seguintes
//Fórmulas:
//- para homens: (72.7 * Altura) – 58
//- para mulheres: (62.1 * Altura) – 44.7

int main()
{
    float peso=0,altura=0;
    int sexo;

    cout<<"Sexo Feminino Op=1"<<endl;
    cout<<"Sexo Masculino OP=2"<<endl;
    cout<<"Informe a OP: ";
    cin>>sexo;
    cout<<"Informe a altura: ";
    cin>>altura;


    if(sexo==1)
    {
        peso=72.7*altura-58;
        cout<<"Peso Ideal Feiminino= ("<<peso<<")"<<endl;
    }

    if(sexo==2)
    {
        peso=62.1*altura-44.7;
        cout<<"Peso Ideal Masculino= ("<<peso<<")"<<endl;
    }
    

    
    
    




} 


