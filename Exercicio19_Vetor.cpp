/*19. Faca um vetor de tamanho 50 preenchido com o seguinte valor: (i+5 ∗ i)%(i+ 1), sendo
i a posicao do elemento no vetor. Em seguida imprima o vetor na tela.*/

#include<iostream>

using namespace std;


class HelloWorld {

       
       public: 

       float vetor[] = new float [10];

       int qtdNeg, sumPos;

       qtdNeg = sumPos = 0;

       Scanner array = new Scanner (System.in);

           for (int i=0;i<10;i++){

               System.out.print("--> ");

               vetor[i] = array.nextFloat();

               if (vetor[i]>0) sumPos+=vetor[i];

               else qtdNeg++;

           

       cout<<"Soma +: "+sumPos;

       cout<<"Qtd  -: "+qtdNeg;

   }

}


class Main {  

public static void main(String args[]) {

Scanner array = new Scanner(System.in);

int arr[]  = new int [10];

 for (int i=0;i<10;i++){

  System.out.print("-->");

  arr[i] = array.nextInt();

 }

 int l=0, verif;

           do{

               verif=0;

               for (int k=0;k<l;k++){

                   if (arr[l]==arr[k]){

                       System.out.print("Replace "+arr[l]);

     arr[l] = array.nextInt();

                       verif=1;

                   }

               }

               if (verif==0){

                   l++;

               }

           } while (l<10);

  for (int q = 0;q<10;q++){

   System.out.println(arr[q]);

  }

 }

}

----------

class HelloWorld {

   public static void main(String[] args) {

       float vetor[] = new float [50];

           
           for (int i=0;i<50;i++)
           {

               vetor[i] = (i+5*i)%(i+1);

           }

           

           for (int j=0;j<50;j++)
           {

               System.out.println(vetor[j]);

           }

   }

}

