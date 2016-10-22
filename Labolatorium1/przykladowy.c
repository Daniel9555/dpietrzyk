 #include <stdio.h>
 int main()  {
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

  }
  return 0;
  }
