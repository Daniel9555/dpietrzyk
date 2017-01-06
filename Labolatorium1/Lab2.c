#include <stdio.h>

int main() {

int a;
scanf("%d", &a);
int b;
scanf("%d", &b);
int c;
scanf("%d", &c);

double dzialanie1 = a * b - ((double) b / c );
printf("%f\n", dzialanie1 );


double dzialanie2 = a*b - b%c;
printf("%f\n", dzialanie2 );

double dzialanie3 = a*b - c*a - b*c;
printf("%f\n", dzialanie3 );

printf("%d, %d, %d\n",a,b,c );




  if ((a>b) && (b>c) && (a>c)) {

  printf("%d, %d, %d\n" ,c,b,a);

} else if((b>a) && (a>c) && (b>c)) {

  printf("%d, %d, %d\n" ,c,a,b);

} else if((c>a) && (b>a) && (c>b)) {

  printf("%d, %d, %d\n" ,a,b,c);

} else if((a>b) && (b<c) && (a>c)) {

  printf("%d, %d, %d\n" ,b,c,a);

} else if((b>a) && (a<c) && (b>c)) {

  printf("%d, %d, %d\n" ,a,c,b);

} else if((c>a) && (b<a) && (c>b)) {

  printf("%d, %d, %d\n" ,b,a,c);

  } else {



  }

return 0;
}
