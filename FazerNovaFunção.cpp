#include<iostream>

using namespace std;

   int obtem_valor(void);

   main()
   {
      int a, b;

      a = obtem_valor();
      b = obtem_valor();

      printf("soma = %d\n", a + b);
   }

   int obtem_valor(void)
   {
      int valor;
  
      printf("Entre um valor: ");
      scanf("%d", &valor);

      return valor;
   }
