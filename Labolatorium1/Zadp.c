#include <stdio.h>

int main() {
int tab [7];
int max = -99999;
int min = 99999;
int suma = 0;
double srednia = 0;

for (int i = 0; i < 7; i=i+1) {
  scanf("%d", &tab[i]);
  }
    for (int i = 0; i < 7; i=i+1) {
    printf("%d\n",tab[i]);
  }
    //liczba największa
    for (int i = 0; i < 7; i=i+1) {
    if (tab[i]>max) {max=tab[i];
    printf("max = %d",max);
}
  }
    //liczba najmniejsza
    for (int i = 0; i < 7; i=i+1) {
    if (tab[i]<min) {min=tab[i];
    printf("min = %d",min);
}
  }
    //średnia arytmetyczna
    for (int i =0; i > 7; i=i+1) {
    suma = suma + tab [i];
    srednia = (double) suma/ i;
    printf ("Suma: %d, Srednia: %f\n\n" ,suma,srednia);
  }
    //Liczby większe od 100
    for (int i = 0; i <7; i=i+1) {
    if (tab[1]<100){
    //printf("%d\n");
  }
  }

return 0;
}
