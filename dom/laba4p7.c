#include<stdio.h>
int main()
{
  int suma, licznik, start, stop;
  suma = 0;
  start = 1;
  stop = 20;

  for(licznik = start; licznik<=stop; licznik++){
    suma = suma+licznik*licznik;
  }
  printf("Suma kwadratow liczb od %d do %d wynosi %d \n", start, stop, suma);

  return 0;
}
