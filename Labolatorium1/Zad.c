#include <stdio.h>

 int main()  {
   int counter;
   scanf("%d",&counter);
   printf("%d\n",counter);
   if (counter%2==0 && counter%3==0 && counter%5==0) {
     printf("Dzieli się przez 2,3 i 5");
   } else if (counter%2==0 && counter%3==0) {
     printf("Dzieli się przez 2 i 3");
   } else if (counter%3==0 && counter%5==0) {
     printf("Dzieli się przez 3 i 5");
   } else if (counter%2==0 && counter%5==0) {
     printf("Dzieli się przez 2 i 5");
   } else if (counter%2==0) {
     printf("Dzieli się przez 2");
   } else if (counter%3==0) {
     printf("Dzieli się przez 3");
   } else if (counter%5==0) {
     printf("Dzieli się przez 5");
   } else {

   }

   return 0;
   }
