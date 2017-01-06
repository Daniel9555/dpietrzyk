#include <stdio.h>


int main() {

   int a;
   int i;
   printf("Zad1\n Podaj pierwsza liczbe calkowita: \n");
   scanf("%d", &a);
   int b;
  printf("Podaj druga liczbe calkowita: \n");
   scanf("%d", &b);
   for (i=a; i<=b; i++) {
   printf("%d\n" ,i);
}
    int c;
    printf("Zad2\n Podaj pierwsza liczbe calkowita \n");
    scanf("%d",&c) ;
    printf("Podaj druga liczbe calkowita \n");
    scanf("%d",&b);
    int suma = 0;
    for (a = c; a <= b; a++) {
    suma = suma + a;
   }
    printf("%d",suma);


    int x;
    int sum = 0;
    int wantContinue;
    printf("\nZad3\n Czy kontynuowac (1-tak/0-nie)? \n");
    scanf("%d",&wantContinue);


    while (wantContinue == 1) {
        printf("Podaj liczbe : \n");
        scanf("%d",&x);
        sum += x*x;
        printf("Czy kontynuowac (1-tak/0-nie)? \n");
        scanf("%d",&wantContinue);

      }
      printf("%d\n",sum);
      int silnia = 1;
      printf("Zad4\n Podaj liczbe calkowita \n");
      scanf("%d",&a);
      for(i = a; i>1; i--) {
      silnia *=i;
   }
   printf("%d\n",silnia);
   return 0;
   }
