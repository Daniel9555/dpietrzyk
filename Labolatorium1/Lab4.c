#include <stdio.h>
//zad1
int main() {
   int a;
   printf("Podaj pierwsza liczbe calkowita: \n");
   scanf("%d", &a);
   int b;
  printf("Podaj druga liczbe calkowita: \n");
   scanf("%d", &b);
   for (int i=a; i<=b; i++) {
   printf("%d\n" ,i);
}
 

   //zad 2
       int c;
       printf("Podaj pierwsza liczbe calkowita \n");
       scanf("%d",&c) ;
       int b;
       printf("Podaj druga liczbe calkowita \n");
       scanf("%d",&b);
       int suma = 0;
       for (int  a = c; a <= b; a++) {
       suma = suma + a;
   }
       printf("%d",suma);
   }

   //zad 3
      int x;
      int sum = 0;
      int wantContinue;
      printf("Czy kontynuowac (1-tak/0-nie)? \n");
      scanf("%d",&wantContinue);

      while (wantContinue == 1) {
          printf("Podaj liczbe : \n");
          scanf("%d",&x);
          sum += x*x;
          printf("Czy kontynuowac (1-tak/0-nie)? \n");
          scanf("%d",&wantContinue);
      }
      printf("%d\n",sum);
      

   //zad 4
      int a;
      int i;
      int silnia = 1;
      printf("Podaj liczbe calkowita \n");
      scanf("%d",&a);
      for(i = a; i>1; i--) {
      silnia *=i;
   }
   printf("%d\n",silnia);
   return 0;
   }
