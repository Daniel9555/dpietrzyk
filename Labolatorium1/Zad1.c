#include <stdio.h>

//Zad1//
int main() {
int a;
printf("%f\n",a);
scanf("%f",&a);
 
double b;
printf("%d\n",b);
scanf("%d",&b);
 
double c;
printf("%d\n",c);
scanf("%d",&c);
  
double wynik = (a*b) - (b/c)
printf("%d\n" ,wynik);
}

//Zad2//
int main() {
int a;
printf("%f\n",a);
scanf("%f",&a);
 
double b;
printf("%d\n",b);
scanf("%d",&b);

double c;
printf("%d\n",c);
scanf("%d",&c);
  
double wynik = (a*b) - (b%c)
printf("%d\n" ,wynik);
}

//Zad3//
int main() {
int a;
printf("%f\n",a);
scanf("%f",&a);
 
double b;
printf("%d\n",b);
scanf("%d",&b);

double c;
printf("%d\n",c);
scanf("%d",&c);
  
double wynik = (a*b) - (c*a) - (b*c)
printf("%d\n" ,wynik);
}

//Zad4//
int main() {
  int a;
  printf("%d\n",a);
  scanf("%d",&a);

  float b;
  printf("%f\n",b);
  scanf("%f",&b);

  float c;
  printf("%f\n",c);
  scanf("%f",&c);
  int a,b,c;
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







