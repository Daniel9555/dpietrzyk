#include <stdio.h>

//Zad1//
int main() {
int a;
scanf("%f",&a);
printf("%f\n",a);
 
double b;
scanf("%d",&b);
printf("%d\n",b);

double c;
scanf("%d",&c);
printf("%d\n",c);
  
double wynik = (a*b) - (b/c)
print("%d\n" ,wynik);
}

//Zad2//
int main() {
int a;
scanf("%f",&a);
printf("%f\n",a);
 
double b;
scanf("%d",&b);
printf("%d\n",b);

double c;
scanf("%d",&c);
printf("%d\n",c);
  
double wynik = (a*b) - (b%c)
print("%d\n" ,wynik);
}

//Zad3//
int main() {
int a;
scanf("%f",&a);
printf("%f\n",a);
 
double b;
scanf("%d",&b);
printf("%d\n",b);

double c;
scanf("%d",&c);
printf("%d\n",c);
  
double wynik = (a*b) - (c*a) - (b*c)
print("%d\n" ,wynik);
}

//Zad4//
int main() {
  int a;
  scanf("%d",&a);
  printf("%d\n",a);

  float b;
  scanf("%f",&b);
  printf("%f\n",b);

  float c;
  scanf("%f",&c);
  printf("%f\n",c);
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







